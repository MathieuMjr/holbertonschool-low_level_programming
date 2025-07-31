#include "main.h"

/**
 * read_textfile - insert a new node
 * à index idx
 * @filename: adress of head
 * @letters: index of the node you want to insert
 * before
 * Return: pointer to the new node created
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void* buffer;
	ssize_t r;
	ssize_t written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return(-1);
	}
	r = read(fd, buffer,letters);
	written = write(1, buffer, r);
	free(buffer);
	close(fd);
	if (written != r)
		return (0);
	return(written);
}
