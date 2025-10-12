#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file.
* @text_content: NULL-terminated string to add to the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written = 0;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		written = write(fd, text_content, len);
		if (written == -1 || (size_t)written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
