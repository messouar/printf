#include "main.h"
/**
 * reverse_string - Reverses a string in place
 * @str: The string to reverse
 * @len: The length of the string
 */

void reverse_string(char *str, int len)
{
	char temp;
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
