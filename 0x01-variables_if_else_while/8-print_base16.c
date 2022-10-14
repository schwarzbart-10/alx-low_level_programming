#include <stdio.h>
#include <ctype.h>
/**
 * main - runs the entire code
 *
 * Return: returns 0 to exit function
 */
int main(void)
{
	int number;
	int letter;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
