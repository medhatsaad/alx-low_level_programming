# include "main.h"
/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: text be written to file
 * Return: 1 success or -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, size = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, S_IRWXU);
	if (fd < 0)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		size++;
	if (write(fd, text_content, size))
		return (1);
	else
		return (-1);
}
