#include "main.h"
/**
* print_alphabet_x10 - entry point for the program
*
*Return: return Always 0 (success)
*/
void print_alphabet_x10(void)
{
	char alpha, co;

	co = 0;
	while (co < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		co++;
		_putchar('\n');
	}
}
