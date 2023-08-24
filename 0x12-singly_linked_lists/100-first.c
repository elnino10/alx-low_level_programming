#include "lists.h"

void startup_call(void) __attribute__((constructor));

/**
 * startup_call - prints to the standard output before main function
 *
 * Return: nothing
 */
void startup_call(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my\
back!\n");
}
