# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
#include <unistd.h>
/**
 * main - read header of elf file
 * @argc: number of arg
 * @argv: arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	char *buffer;

	if (argc < 2)
		exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		exit(98);
	buffer = malloc(64);
	if (!buffer)
		exit(98);
	if (read(fd, buffer, 64) < 0)
		exit(98);
	printf("%s", buffer);
	return (0);
}
