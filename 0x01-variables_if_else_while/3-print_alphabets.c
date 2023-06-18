#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char alp[26] = "abcdefghijklmnopqrstuvwxyz"
	
	int i;
	
	for (i = 97; i < 123; i++) {
	if (i != 101 && i != 113) {
	putchar(i);
	}
	}
	for (i = 65; i < 91; i++) {
	if (i != 69 && i != 81) {
	putchar(i);
	}
	}
	{
	putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
