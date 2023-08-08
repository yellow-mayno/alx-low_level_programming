#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
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
	ssize_t cnt, read_cnt;

	if (filename == NULL || n == 0)
		return (0);
	buf = malloc(sizeof(char) * n);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_cnt = read(fd, buf, n);
	cnt = write(1, buf, read_cnt);
	close(fd);
	free(buf);
	return (cnt);
}
