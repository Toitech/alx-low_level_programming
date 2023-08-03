#include "main.h"
/**
 * get_bit - Gets the value of a bit at a specified inde
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve (0-based).
 *
 * This function returns the value of the bit at the speion
 * returns -1 to indicate an error.
 *
 * Return: The value of the bit atex, or -1 if the index is invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
