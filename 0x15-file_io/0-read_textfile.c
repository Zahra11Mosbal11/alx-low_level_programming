#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - start
 * @filename: the name of file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * and zero ather wear
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = open(filename, O_RDONLY);
	char *buf = malloc(letters);
	ssize_t readfp, writfp;

	if (filename == NULL)
		return (0);
	if (fp == -1)
		return (0);
	if (buf == NULL)
	{
		close(fp);
		return (0);
	}
	readfp = read(fp, buf, letters);
	if (readfp == -1)
	{
		free(buf);
		close(fp);
		return (0);
	}
	writfp = write(STDOUT_FILENO, buf, readfp);
	if (writfp == -1 || writfp != readfp)
	{
		free(buf);
		close(fp);
		return (0);
	}
	free(buf);
	close(fp);
	return (readfp);
}
