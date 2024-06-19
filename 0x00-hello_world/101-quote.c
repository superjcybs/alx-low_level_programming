#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: writes program with std error
 *
 * Return: return 1 on success
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
