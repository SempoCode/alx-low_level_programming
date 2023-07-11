#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the name of the file
 * @text_content: the content to be written  to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileDes, written_b, bits;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (bits = 0; text_content[bits];)
			bits++;
	}

	fileDes = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	written_b = write(fileDes, text_content, bits);
	if (written_b == -1 || fileDes == -1)
		return (-1);
	close(fileDes);
	return (1);
}
