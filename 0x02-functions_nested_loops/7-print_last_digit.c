#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: The number to be printed
 * Return: Value of the last digit number
 */
int print_last_digit(int r)
{
	int i;

	if (r < 0)
	{
		i = -1 * (r % 10);
	}
	else
	{
		i = r % 10;
	}
	_putchar(i + '0');
	return (1);
}
