#include "main.h"

/**
 * create_file - create a file or, if already exists
 * erase its content
 * @filename: name of the file to open
 * @text_content: text to write in the file
 *
 * Return: 0 if succeed, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);

	if (text_content == NULL)
		text_content = "";
	else
	{
		while (text_content[i] != '\0')
		{
			++i;
		}
	}
	written = write(fd, text_content, i);
	if (written != (i))
		return (-1);
	return (1);
}
