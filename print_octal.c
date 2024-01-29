#include "main.h"

/**
 * print_octal - prints a number in octal format
 * @num: number to be printed
 * @array: buffer to store the result
 * @size: size of buffer
 * Return: length of the result
 */

int print_octal(unsigned long int num, char *array, int size)
{
	int i = 0;
	int lenPrinted = 0;

	if (num == 0)
	{
		if (i >= size)
			return (-1);
		array[i++] = '0';
		lenPrinted++;
	}
	else
	{
		while (num != 0)
		{
			if (i >= size)
				return (-1);

			array[i++] = (num % 8) + '0';
			num /= 8;
			lenPrinted++;
		}
		reverse_string(array, i);
	}
	return (lenPrinted);
}
