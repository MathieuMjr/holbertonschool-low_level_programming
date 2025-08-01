#include "main.h"

/**
 * cp_file - copy file content into another one
 * @src_filename: path of the source file
 * @dest_filename: path of the destination file
 *
 * Return: 1 if succeed
 */
int cp_file(const char *src_filename, const char *dest_filename)
{
	int src_fd;
	int dest_fd;
	ssize_t been_read;
	ssize_t written;
	void *buffer;

	src_fd = open(src_filename, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		exit(98);
	}
	dest_fd = open(dest_filename, O_CREAT | O_WRONLY | O_TRUNC,
		S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
		exit(99);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	while ((been_read = read(src_fd, buffer, 1024)) > 0)
	{
		if (been_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
			free(buffer);
			exit(98);
		}
		written = write(dest_fd, buffer, been_read);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
			free(buffer);
			exit(99);
		}
	}
	if (been_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		free(buffer);
		exit(98);
	}
	free(buffer);
	close(src_fd);
	close(dest_fd);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}

