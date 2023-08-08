#include <fcntl.h>
#include <unistd.h>
/**
* create_file - creates files xD
* @filename: the path
* @text: text to fill the file with
* Return: 1 / -1 success or failure
*/
int create_file(const char *filename, char *text)
{
	int r, fd, i = 0;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	for (; text[i] != '\0'; i++)
		;
	r = write(fd, text, i);
	close(fd);
	return (1 - 2 * (r == -1));
}