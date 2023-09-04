#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of file
 * @letters: number of characters
 *
 * Return: Number of characters read or 0 when it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, read_l, close_f, print_l;
	char *buffer;

	file_d = print_l = read_l = 0;

	buffer = malloc(letters * sizeof(char));
	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	read_l = read(file_d, buffer, letters);
	if (read_l == -1)
		return (0);

	print_l = write(STDOUT_FILENO, buffer, read_l);
	if (print_l == -1)
		return (0);

	close_f = close(file_d);
	if (close_f == -1)
		return (0);

	free(buffer);
	return (read_l);
}
