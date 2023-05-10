# include "main.h"
/**
 * read_textfile - read from a file
 * @filename: file pointer
 * @letters: letters size to read
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t a;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);
	a = read(fd, buffer, letters);
	if (a < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	a = write(1, buffer, a);
	if (a < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (a);
}
