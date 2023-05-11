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

	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd < 0)
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (text_content[0] == 'N')
		if (text_content[1] == 'U')
			if (text_content[2] == 'L')
				if (text_content[3] == 'L')
					if (text_content[4] == '\0')
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
