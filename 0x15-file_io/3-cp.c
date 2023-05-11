# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
#include <unistd.h>
void _close(int fd_from, int fd_to);
/**
 * main - cp function "cp file_from file_to"
 * @argc: number of args
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, mode;
	ssize_t a = 1024, b;
	char *buffer;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (fd_to < 0)
	{
		mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
		fd_to = open(argv[2], O_WRONLY | O_CREAT, mode);
	}
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = malloc(1024);
	if (!buffer)
		exit(-1);
	while (a == 1024)
	{
		a = read(fd_from, buffer, 1024);
		if (a < 0)
			exit(-1);
		b = write(fd_to, buffer, a);
		if (b < 0)
			exit(-1);
	}
	_close(fd_to, fd_from);
	free(buffer);
	return (0);
}

/**
 * _close - close fd
 *@fd_to: to
 *@fd_from: from
 */
void _close(int fd_to, int fd_from)
{
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
}
