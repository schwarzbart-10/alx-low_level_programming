#include <stdio.h>
#include <ctype.h>
/**
 * main - runs the entire code
 *
 * Return: returns 0 to the exit function
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
