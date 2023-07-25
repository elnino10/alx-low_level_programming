#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * random_num - random number
 * @min: minimum value
 * @max: maximum value
 * Return: random numbers
 */
int random_num(int min, int max)
{
	int randNum;

	randNum = rand() % (max - min + 1) + min;
	return (randNum);
}

/**
 * generate_rand - generates random values
 * @passwd: password pointer
 * @len: length of password
 */
void generate_rand(char *passwd, int len)
{
	int i;

	const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN\
OPQRSTUVWXYZ0123456789";
	int valid_chars_len = sizeof(valid_chars) - 1;

	for (i = 0; i < len; i++)
	{
		int random_index = random_num(0, valid_chars_len - 1);

		passwd[i] = valid_chars[random_index];
	}

	passwd[len] = '\0';
}

/**
 * main - password generation
 * Return: 0 (success)
 */
int main(void)
{
	srand(time(NULL));

	int password_length = 10;
	char password[password_length + 1];

	generate_rand(password, password_length);

	printf("%s\n", password);

	return (0);
}
