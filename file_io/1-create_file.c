#include "main.h"

/**
 * read_textfile - read and print a text file on
 * stdout
 * @filename: name of the file to open
 * @letters: number of byte to read and write
 *
 * Return: number of byte written
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
		while(text_content[i] != '\0')
		{
			++i;
		}
	}
	written = write(fd, text_content, i);
	if (written != (i))
		return (-1);
	return (1);
}
