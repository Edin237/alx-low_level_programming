#include <stdio.h>

/**
* main - Entry point
*
* Description: Size is not all that maters
* Return: 0 is always returned.
*/
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of char: %lu byte(s)\n", sizeof(init));
	printf("Size of char: %lu byte(s)\n", sizeof(long init));
	printf("Size of char: %lu byte(s)\n", sizeof(long long int));
	printf("Size of char: %lu byte(s)\n", sizeof(float));
	return (0);
}
