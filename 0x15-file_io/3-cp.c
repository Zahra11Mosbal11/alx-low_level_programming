#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * error_handil - start
 * @code: the return code
 * @masg: the error masseg
 * Return: void
 */
void error_handil(int code, char *masg)
{
	dprintf(STDERR_FILENO, "%s\n", masg);
	exit(code);
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
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	ssize_t readf, writef;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		error_handil(97, "Usage: cp file_from file_to");
	fs = open(file_from, O_RDONLY);
	if (fs == -1)
		error_handil(98, "Error: Can't read from file");
	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd == -1)
		error_handil(99, "Error: Can't write to");
	while ((readf = read(fs, buf, BUFFER_SIZE)) > 0)
	{
		if (readf == -1)
			error_handil(98, "Error: Can't read from file");
		writef = write(fd, buf, readf);
		if (writef == -1 || writef != readf)
			error_handil(99, "Error: Can't writ to");
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
