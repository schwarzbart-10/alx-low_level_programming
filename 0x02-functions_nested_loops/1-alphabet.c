#include "main.h"
/**
* main - entry point of the program
*
* Return - return Always 0 (success)
*/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
