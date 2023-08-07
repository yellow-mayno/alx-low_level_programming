#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
* read_textfile - read a file and print it
* @filename: path
* @n: nomber of chars to print
* Return: number of char printed successfuly
*/
ssize_t read_textfile(const char *filename, size_t n)
{
	int fd;
	char *buf;
	ssize_t cnt;

	buf = malloc(sizeof(char) * n);
	fd = open(filename, O_RDONLY);
	read(fd, buf, n);
	cnt = write(1, buf, n);
	close(fd);
	free(buf);
	return (cnt);
}