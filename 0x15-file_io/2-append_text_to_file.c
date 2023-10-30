#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - start
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp = open(filename, O_WRONLY | O_APPEND);
	ssize_t length, writf;

	if (filename == NULL)
		return (-1);
	if (fp == -1)
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
