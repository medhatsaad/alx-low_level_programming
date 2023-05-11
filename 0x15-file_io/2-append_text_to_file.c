# include "main.h"
/**
 * append_text_to_file - append content to a file
 * @filename: name of file
 * @text_content: text be written to file
 * Return: 1 success or -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		size++;
	if (size == 0)
	{
		close(fd);
		return (1);
	}
	if (write(fd, text_content, size))
	{
		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (-1);
	}
}
