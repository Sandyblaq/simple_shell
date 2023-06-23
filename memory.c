#include "shell.h"

/**
 * bfree - will free a pointer and VOID the address
 * @ptr: points the address to be free
 *
 * Return: 1 if free, otherwise 0.
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
