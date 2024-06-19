#include "main.h"
#include <stdio.h>
/**
 * print_buffer - entry point
 * Desc: prints a buffer
 * @b: the buffer we are going to print
 * @s: byte of buffer to print
 */
void print_buffer(char *b, int s)
{
	int byte, i;

	for (byte = 0; byte < s; byte += 10)
	{
		printf("%08x: ", byte);

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= s)
				printf("  ");

			else
				printf("%02x", *(b + i + byte));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= s)
				break;

			else if (*(b + i + byte) >= 31 &&
				 *(b + i + byte) <= 126)
				printf("%c", *(b + i + byte));

			else
				printf(".");
		}

		if (byte >= s)
			continue;

		printf("\n");
	}

	if (s <= 0)
		printf("\n");
}
