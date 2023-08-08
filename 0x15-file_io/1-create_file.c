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

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (-1);
	if (text == NULL)
	{
		close(fd);
		return (1);
	}
	for (; text[i] != '\0'; i++)
		;
	r = write(fd, text, i);
	close(fd);
	return (1 - 2 * (r == -1));
}
