#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to name of the file
 * @text_content: pointer to content to be written to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDes, written_b, bits;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (bits = 0; text_content[bits];)
			bits++;
	}

	fileDes = open(filename, O_WRONLY | O_APPEND);
	written_b = write(fileDes, text_content, bits);
	if (written_b == -1 || fileDes == -1)
		return (-1);
	close(fileDes);
	return (1);
}

