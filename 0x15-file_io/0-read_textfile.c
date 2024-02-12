#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads content from a file then prints it out
 * to the standard output
 * @filename: the name of the file
 * @letters: number of characters contained in the file
 *
 * Return: contents read from the file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, rd, wt;
	char *print_line;

	fp = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (fp == -1)
		return (0);

	print_line = malloc(sizeof(char) * letters);
	rd = read(fd, print_line, letters);
	wt = write(STDOUT_FILENO, print_line, rd);

	free(print_line);
	close(fp);
	return (wt);
}
