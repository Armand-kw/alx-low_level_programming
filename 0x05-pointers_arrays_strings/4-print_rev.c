#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int mando = 0;
	int o;

	while (*s != '\0')
	{
		mando++;
		s++;
	}
	s--;
	for (o = mando; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

