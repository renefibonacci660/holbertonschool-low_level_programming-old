#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of function
 * Description: prints random nums & value of remainder
 * Return: Always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, abs(n % 10));
	} else if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	} else
	{
		printf("Last digit of %d is %d ", n, abs(n % 10));
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
