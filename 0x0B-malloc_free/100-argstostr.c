#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: pointer to argument vector
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, index, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; ++i)
		len += strlen(av[i]);

	str = malloc(sizeof(char) * len + ac);
	if (str == NULL)
		return (NULL);

	index = 0;
	for (j = 0; j < ac; ++j)
	{
		k = 0;
		while (av[j][k] != '\0')
		{
			str[index++] = av[j][k];
			k++;
		}
		str[index++] = '\n';
	}
	return (str);
}
