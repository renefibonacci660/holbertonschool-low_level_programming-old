#include <stdio.h>
/**
 * main - Entry point of function
 * Description: prints 0-9 then \n no var type int
 * Return: Always zero
 */

int main(void)
{
	char numbers;
	char letters;
	char n;

	numbers = 48;
	letters = 65;
	n = '\n';

	while (numbers <= 57)
	{
		putchar(numbers);
		numbers = numbers + 1;
	}

	while (letters <= 70)
	{
		putchar(letters);
		letters = letters + 1;
	}

	putchar(n);
	return (0);
}
