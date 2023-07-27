#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 is equal, negative if s1 < s2 and positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, val;

	val = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; ++i)
	{
		if (s1[i] == s2[i])
		{
			return (val);
		}
		else
		{
			val += (s1[i] - s2[i]);
		}
	}
	return (val);
}
