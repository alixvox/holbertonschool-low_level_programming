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
 * read_textfile - Reads a text file to stdout.
 *
 * @filename: The name of the file to read
 * @letters: The number of chars it should read/print
 * Return: The amount of letters read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t td1, td2, td3;
	char *buf = malloc(sizeof(char) * letters);

	if (!filename || !buf)
	{
		return (0);
	}

	td1 = open(filename, O_RDONLY);

	if (td1 == -1)
	{
		return (0);
	}

	td2 = read(td1, buf, letters);
	if (td2 == -1)
	{
		return (0);
	}

	td3 = write(STDOUT_FILENO, buf, td2);

	close(td1);
	free(buf);

	return (td3);
}
