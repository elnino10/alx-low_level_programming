#include "variadic_functions.h"

/**
 * print_str - Prints string
 * @args: string variable
 */
void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s",  s);
}

/**
 * print_char - Prints char
 * @args: char variable
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints int
 * @args: int variable
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints float
 * @args: Where the float is
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - Print all  arguments passed
 * @format: format specifiers of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *split;
	int num_args;
	Print_f print_f[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	int i, j;

	va_start(args, format);
	num_args = strlen(format);
	i = 0;
	split = "";
	while (format && format[i])
	{
		j = 0;
		while (j < num_args)
		{
			if (*print_f[j].s == format[i])
			{
				printf("%s", split);
				print_f[j].func(args, split);
				split = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
