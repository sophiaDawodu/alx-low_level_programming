#include <stdio.h>

/**
 * main - prints out all numbers under 10
 * without using any char variables
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar(i + '0');

	putchar('\n');

	return (0);
}
