#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - start
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t length, writf;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		length = strlen(text_content);
		writf = write(fp, text_content, length);
		if (writf == -1 || writf != length)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
