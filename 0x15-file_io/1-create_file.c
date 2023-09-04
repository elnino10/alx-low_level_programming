#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, length, close_f;

	length = 0;
	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
		write(file, text_content, length);
	}

	close_f = close(file);
	if (close_f == -1)
		return (-1);

	return (1);
}
