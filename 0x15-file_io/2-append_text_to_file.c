#include <stdlib.h>
#include <stdio.h>
#include <main.h>

/**
 * append_text_to_file - his function creates a file
 * @filename: the name of a file
 * @text_content: the content of the file
 *
 * Return: an int val
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, wt, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i])
			i++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	wt = write(fp, text_content, i);
	
	if (fp == -1 || wt == -1)
		return (-1);

	close(fp);
	return (1);
}
