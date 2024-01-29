#include "main.h"

/**
 * print_hex - prints a number in hexadecimal format
 * @num: number to be printed
 * @array: buffer to store the result
 * @size: size of buffer
 * Return: length of the result
 */

int print_hex(unsigned long int num, char *array, int size)
{
	int i = 0;
	int lenPrinted = 0;
	int calcNumb = 0;

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
			calcNumb = num % 16;
			if (calcNumb < 10)
				array[i++] = calcNumb + '0';
			else
				array[i++] = calcNumb - 10 + 'a';
			num /= 16;
			lenPrinted++;
		}
		reverse_string(array, i);
	}
	return (lenPrinted);
}
