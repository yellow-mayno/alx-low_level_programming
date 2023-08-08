#include <fcntl.h>
#include <unistd.h>
/**
* append_text_to_file - append files if they exist
* @filename: the path
* @text: text to fill the file with
* Return: 1 / -1 success or failure
*/
int append_text_to_file(const char *filename, char *text)
{
	int r, fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
