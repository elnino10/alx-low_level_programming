#include "main.h"

void file_fail_1(char *file);
void file_fail_2(char *file);
void close_fail(int fd);

/**
 * main - copy the content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char buffer[BUFF];
	int file_1, file_2, file_1_rd, file_2_wr, close_f;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		file_fail_1(argv[1]);
	if (argv[2] == NULL)
		file_fail_2(argv[2]);
	file_1 = open(argv[1], O_RDONLY);
	if (file_1 == -1)
		file_fail_1(argv[1]);
	file_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_2 == -1)
		file_fail_2(argv[2]);
	file_1_rd = read(file_1, buffer, BUFF);
	if (file_1_rd == -1)
		file_fail_1(argv[1]);
	while (file_1_rd > 0)
	{
		file_2_wr = write(file_2, buffer, file_1_rd);
		if (file_2_wr != file_1_rd)
			file_fail_2(argv[2]);
		file_1_rd = read(file_1, buffer, BUFF);
		if (file_1_rd == -1)
			file_fail_1(argv[1]);
	}
	close_f = close(file_1);
	if (close_f == -1)
		close_fail(file_1);
	close_f = close(file_2);
	if (close_f == -1)
		close_fail(file_2);
	return (0);
}

/**
 * file_fail_1 - Print error message if file-read fails
 * @file: Name of file
 */
void file_fail_1(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * file_fail_2 - Print error message if file-write fails
 * @file: Name of file
 */
void file_fail_2(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_fail - Print error message if file can't close
 * @fd: File descriptor of the file
 */
void close_fail(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
