#include "main.h"

/**
 * rot13 - rotate
 * @a: string
 * Return: string
 */

char *rot13(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		a[i] = a[i] + 13;
		i++;
	}
	return (a);
}
