#include <unistd.h>
#include <fcntl.h>
/**
* read_textfile - read and print
* @filename: const char *
* @n: number of readed and printed chars
* Return: the number of successful printed char
*/
ssize_t read_textfile(const char *filename, size_t n)
{
	FILE *fbuf;
	ssize_t cnt;

	fbuf = open(filename, O_RDONLY, "r");
	cnt = write(1, fbuf, n);
	close(fbuf);
	return (cnt);
}
