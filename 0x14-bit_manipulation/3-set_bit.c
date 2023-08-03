#include "main.h"
/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: A pointer to the number to change.
 * @index: The index of the bit to set to 1.
 *
 * This function sets the bit at the specified index to 1
 * pointed to by @n. The index must be within the range
 * [0, 63] for this operation
 * to be successful.
 *
 * Return: 1 if the operation was successful,
 * or -1 if the index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
