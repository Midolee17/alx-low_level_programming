#include <stdio.h>

/**
 *main - No e and q
 *Return: Only 0
 */


int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
		putchar(l);
	}

	putchar('\n');

	return (0);

}
