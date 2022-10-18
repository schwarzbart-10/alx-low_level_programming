#include "main.h"
/**
* print_alphabet - entry point of the program
*
* Description of function print_alphabet: prints a-z in lower case
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
