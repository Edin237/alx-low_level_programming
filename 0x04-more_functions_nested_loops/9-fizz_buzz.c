#include <stdio.h>

/**
 * main - print 1 to 100 and and multiples as fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int e;

	for (e = 1; e < 100; e++)
	{
		if ((e % 3) == 0 && (e % 5) == 0)
		{
		printf("FizzBuzz ");
		}
		else if (e % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (e % 5 == 0)
		{
		printf("Buzz ");
		}
		else
		{
		printf("%d ", e);
		}


	}
	printf("Buzz");
	printf("\n");

	return (0);
}
