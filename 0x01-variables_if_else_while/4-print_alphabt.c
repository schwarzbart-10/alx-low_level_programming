#include <stdio.h>
#include <ctype.h>
/**
 * main - runs all the code
 *
 * Return: returns 0 to exit function
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
