#include "main.h"

/**
*main - check the code
*
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char *buff;
	int rd, wr;
	int close_err;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[1], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd = read(file_from, buff, 1024);
	do
	{
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(file_to, buff, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(file_from, buff, 1024);
		file_to = open(argv[1], O_WRONLY | O_APPEND);
	}
	while (rd > 0);
	free(buff);
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
