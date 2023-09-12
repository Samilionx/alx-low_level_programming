#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bin;

	for (bin = 0; bin <= 9; bin++)
	{
		printf("%d", bin);
	}
	putchar('\n');
	return (0);
}
