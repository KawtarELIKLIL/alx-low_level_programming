#include "main.h"

/**
*read_textfile - reads a text file and prints it
*@filename: name of file
*@letters: num of letters to read and print
*@Return: num of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t rd;
	ssize_t wt;
	char *buff;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rd = read(file, buff, letters);
	wt = write(STDOUT_FILENO, buff, rd);
	free(buff);
	close(file);
	return (wt);
}
