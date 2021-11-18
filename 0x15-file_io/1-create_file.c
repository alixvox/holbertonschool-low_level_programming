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
 * create_file - Creates a file if it does not exist.
 *
 * @filename: The name of the file
 * @text_content: The string to write to the new file
 *
 * Return: 1 on success, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int td;

	/* check for filename and if file can be opened/created */
	if (!filename)
		return (-1);
	td = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (td == -1)
		return (-1);
	/* if there is text content, write it to the file */
	if (!text_content)
		text_content = "";
	write(td, text_content, strlen(text_content));
return (1);
}
