#include "main.h"

/**
  * _puts - print string passed as reference
  *  @str: pointer for string
  *  Return: void
  */

int _puts(signed char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}

	return (len);
}

