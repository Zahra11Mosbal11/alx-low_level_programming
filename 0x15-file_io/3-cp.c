#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * error_handil - start
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: void
 */
void error_handil(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - start
 * @argc: the numberof argment
 * @argv: the string
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int fs, fd;
	ssize_t readf, writef;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fs = open(argv[1], O_RDONLY);
	fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_handil(fs, fd, argv);
	readf = 1024;
	while (readf == 1024)
	{
		readf = read(fs, buf, BUFFER_SIZE);
		if (readf == -1)
			error_handil(-1, 0, argv);
		writef = write(fd, buf, readf);
		if (writef == -1 || writef != readf)
			error_handil(0, -1, argv);
	}
	if (close(fs) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs);
		exit(100);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs);
		exit(100);
	}
	return (0);
}
