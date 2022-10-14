#include <stdio.h>
#include <ctype.h>
/**
 * main - runs the code
 *
 * Return: returns 0 to exit function
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
