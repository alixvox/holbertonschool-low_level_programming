#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends a string of text to the end of a file.
 *
 * @filename: The name of the file
 * @text_content: The string to append
 *
 * Return: 1 if successful, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int td1, td2;
	int len;

	if (!filename)
		return (-1);
	td1 = open(filename, O_WRONLY | O_APPEND);
	if (td1 == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		td2 = write(td1, text_content, len);
		if (td2 == -1)
			return (-1);
	}
return (1);
}
