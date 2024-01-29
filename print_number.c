#include "main.h"
/**
  * print_number - converts number to char and prints it
  * @number: number passed as argument
  * @array: array to store characters
  * @base: base type of the number
  * @size: size of the number
  * Return: int - number of printed characters
  */
int print_number(int number, char *array, int base, int size)
{
	const char charBase[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int i = 0, is_negative = 0, len = 0, digit = 0;
	char temp;

	if (number == 0)
	{
		array[0] = '0';
		array[1] = '\0';
		return (1);
	}
	if (number < 0 && base == 10)
	{
		is_negative = 1;
		number = number * (-1);
	}
	while (number != 0 && i < size - 1)
	{
		digit = number % base;
		number = number / base;
		array[i] = charBase[digit];
		i++;
	}
	if (is_negative)
	{
		array[i] = '-';
		i++;
	}
	array[i] = '\0';
	len = i;
	for (i = 0; i < len / 2; i++)
	{
		temp = array[i];
		array[i] = array[len - i - 1];
		array[len - i - 1] = temp;
	}

	return (len);
}
