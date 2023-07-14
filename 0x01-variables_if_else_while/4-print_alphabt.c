#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char except, e, q;

	e = 'e';
	q = 'q';

	for (except = 'a'; except <= 'z'; except++)
	{
		if (except != 'q' && except != 'e')
		putchar(except);
	}
	putchar('\n');
	return (0);
}
