#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 time
 */
void print_alphabet_x10(void)
{
	char letter;
	int repetition;

	for (repetition = 0; repetition < 10; repetition++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
