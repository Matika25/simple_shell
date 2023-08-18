#include "shell.h"

/**
 * bfree - the frees are the pointer and NULLs is the address
 * @ptr: the address of the pointer is to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
