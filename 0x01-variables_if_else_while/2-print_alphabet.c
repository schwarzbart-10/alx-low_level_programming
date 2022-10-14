#include <stdio.h>
#include <ctype.h>
/**
 * main - runs the entire code
 *
 * Return: returns 0 to exit function
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
