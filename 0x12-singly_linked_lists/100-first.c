#include "lists.h"

/**
 * startup_call - prints to the standard output before main function
 *
 * Return: nothing
 */
void __attribute__((constructor)) startup_call(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my ");
	printf("house upon my back!\n");
}
