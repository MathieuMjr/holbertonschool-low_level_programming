#include "main.h"

/**
 * append_text_to_file - add text to an already existing
 * file.
 * @filename: name of the file to open
 * @text_content: text to write in the file
 *
 * Return: 1 if succeed, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
	{
		++i;
	}
	written = write(fd, text_content, i);
	close(fd);
	if (written != i)
		return (-1);
	return (1);
}
