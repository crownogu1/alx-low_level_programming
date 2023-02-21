#include "main.h"
/**
 * print_alphabet - print alphabets
 * Description: This function prints alphabets
 * Return:No return value
 */
void print_alphabet(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
}
