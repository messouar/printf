#include "main.h"

/**
 * decimalToBinary - converts decimal to binary and prints output
 * @decimalNum: number to convert
 * Return: int - number of printed char
 */

int decimalToBinary(int decimalNum)
{
	int binaryNum[32];
	int i = 0;
	int j = 0;

	while (decimalNum > 0)
	{
		binaryNum[i] = decimalNum % 2;
		decimalNum = decimalNum / 2;
		i++;
	}
	for (j = i - 1 ; j >= 0; j--)
	{
		_putchar(48 + *(binaryNum + j));
	}
	return (i);
}
