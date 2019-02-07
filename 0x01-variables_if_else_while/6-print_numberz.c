#include <stdio.h>
/**
 * main - Entry point of function
 * Description: prints 0-9 then \n no var type int
 * Return: Always zero
 */

int main(void)
{
	char base;
	char n;

	base = 48;
	n = '\n';

	while (base <= 57)
	{
		putchar(base);
		base = base + 1;
	}
	putchar(n);
	return (0);
}
