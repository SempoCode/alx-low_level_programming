#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters:  the number of letters it should read and print
 * Return: 0 if write fails or does not write the expected amount of bytes, if
 *  the file can not be opened or read, if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fileDes, written_b, read_b;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fileDes = open(filename, O_RDONLY);
	read_b = read(fileDes, buf, letters);
	written_b = write(STDOUT_FILENO, buf, read_b);
	free(buf);
	close(fileDes);
	return (written_b);
}

