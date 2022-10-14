#include <stdio.h>
#include <ctype.h>
/**
 * main - runs the code
 *
 * Return: returns 0 to exit function
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
