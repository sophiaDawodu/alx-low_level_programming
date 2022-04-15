#include "main.h"
#include <stdio.h>

/**
* print_number - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/

void print_number(int n)
{
	int num;
	int factor = 0;
	int i;
	int digit;
	int last_digit;

	digit = digit_num(n);
	if (digit == 0)
		_putchar('0' + n);
	else if (digit > 0)
	{
		if (n < 0)
			_putchar('-');
		for (i = digit - 1; i >= 1; i--)
		{
			factor = ten_to_power(i);
			num = (n / factor) % 10;
			if (num < 0)
				num = -num;
			_putchar('0' + num);
		}
		if (n < 0)
			last_digit = -(n % 10);
		else
			last_digit = n % 10;
		_putchar('0' + last_digit);
	}
}
