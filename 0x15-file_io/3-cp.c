#include "main.h"

void closeFile(int fd);
char *createBuffer(char *f);

/**
 * closeFile - closes the file
 * @fd: file descriptor
 * Return: nothing
 */
void closeFile(int fd)
{
	int cloz = close(fd);

	if (cloz == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * createBuffer - Allocates 1024 bytes for a buffer.
 * @f: pointer to the name of the file buffer is storing chars for.
 * Return: pointer to char
 */
char *createBuffer(char *f)
{
	char *buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buf);
}


/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 when succesful
 */
int main(int argc, char *argv[])
{
	char *buf;
	int i, j, k, l;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open(argv[1], O_RDONLY);
	buf = createBuffer(argv[2]);
	k = read(i, buf, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
					argv[1]);
			free(buf);
			exit(98);
		}
		l = write(j, buf, k);

		if (j == -1 || l == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			free(buf);
			exit(99);
		}
		k = read(i, buf, 1024);
		j = open(argv[2], O_CREAT | O_WRONLY | O_APPEND);
	} while (k > 0);

	free(buf);
	closeFile(i);
	closeFile(j);
	return (0);
}

