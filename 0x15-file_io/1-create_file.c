#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content of text
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	size_t counter = 0;
	ssize_t write_out = 0;

	if (filename == NULL)
		return (-1);
	
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_CRAT | O_WRONLY | O_TRUNC, 0600);	
	if (fd == -1)
		return (-1);
	while (text_content[counter])
		counter++;

	write_out = write(fd, text_content, counter);
	if (write_out == -1)
	{
		close (fd);
		return (-1);
	}
	close(fd);
	return(1);	
}
