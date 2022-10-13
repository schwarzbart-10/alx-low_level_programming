#include <unistd.h>
/**
 * main - runs the enitre code
 *
 * Description: prints the value of the write command
 * Main: displays the value of the ran code
 * Return: return 1 to the exit function
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
