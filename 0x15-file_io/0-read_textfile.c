#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: 
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t read_out = 0, write_out = 0;
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		close(fb);
		return (0);
	}


	read_out = read(fd, buf, letters);
	if (read_out == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write_out = write(STDOUT_FILENO, filename, letters);
	if (write_out == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (write_out);
}
