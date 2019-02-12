#include "holberton.h"
/**
 * print_alphabet - prints a - z with newline
**/

void print_alphabet(void)
{
	char *string;
	int l;

	string = "abcdefghijklmnopqrstuvwxyz";

	l = 0;

	while (l <= 27)
	{
		_putchar(string[l]);
		l = l + 1;
	}
	_putchar('\n');
}
