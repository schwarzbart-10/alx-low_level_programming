#include <stdio.h>
#include <ctype.h>
/**
 * main - runs all the source code
 *
 * Return: returns 0 to the exit function
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			for (; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}

