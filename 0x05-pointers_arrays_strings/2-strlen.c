#include "main.h"
/**
 *  _strlen - a function that returns the length of a string
 *  @s: string
 *  Return: length
 */
int_strlen(char *s)
{
	int me = 0;

	while (*s != '\0')

	{
		me++;
		s++;
	}

	return (me);
}
