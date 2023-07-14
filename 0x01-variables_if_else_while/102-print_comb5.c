#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = b; b <= 99; b++)
		{
			printf("%02d %02d", a, b);

			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
