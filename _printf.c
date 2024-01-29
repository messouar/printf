#include "main.h"
/**
  * _printf - custom printf
  * Description: function that produces output according to a format
  * @format: string which contains formatting
  * Return: int - number of number of characters printed
  */
int _printf(const char *format, ...)
{
	va_list argument;
	int counter = 0;

	va_start(argument, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			if (*format == 92)
			{
				format++;
				if (*format == 'b')
				{
					_putchar(8);
					counter++;
				}
				else if (*format == 'f')
				{
					_putchar(12);
					counter++;
				}
				else if (*format == 'n')
				{
					_putchar(10);
					counter++;
				}
				else if (*format == 'r')
				{
					_putchar(13);
					counter++;
				}
				else if (*format == 't')
				{
					_putchar(9);
					counter++;
				}
				else if (*format == 'v')
				{
					_putchar(11);
					counter++;
				}
				else if (*format == 92)
				{
					_putchar(92);
					counter++;
				}
				else if (*format == 34)
				{
					_putchar(34);
					counter++;
				}
				else if (*format == 39)
				{
					_putchar(39);
					counter++;
				}
				else if (*format == '%')
				{
					_putchar('%');
					counter++;
				}
				else
				{
					return (-1);
				}
			}
			_putchar(*format);
			counter++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				signed char charValue = (signed char) va_arg(argument, int);

				if (charValue <= CHAR_MIN && charValue >= CHAR_MAX)
				{
					return (-1);
				}
				else
				{
					_putchar(charValue);
					counter++;
				}
			}
			else if (*format == 's')
			{
				signed char *stringValue = (signed char *) va_arg(argument, signed int *);
				int length = 0;
				signed char *i = stringValue;

				while (*i != '\0')
				{
					if (*i <= CHAR_MIN && *i >= CHAR_MAX)
					{
						length = -1;
					}
					else
					{
						length++;
					}
					i++;
				}
				if (length >= 0)
				{
					counter += _puts(stringValue);
				}
				else
				{
					return (-1);
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				counter++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int intValue = (int) va_arg(argument, int);

				if (intValue >= INT_MIN && intValue <= INT_MAX)
				{
					char array[20];
					int length = print_number(intValue, array, 10, sizeof(array));

					write(1, array, length);
					counter += length;
				}
				else
				{
					return (-1);
				}
			}
			else if (*format == 'b')
			{
				int intValue = (int) va_arg(argument, int);

				if (intValue >= INT_MIN && intValue <= INT_MAX)
				{
					counter += decimalToBinary(intValue);
				}
				else
				{
					return (-1);
				}
			}
			else if (*format == 'u')
			{
				char array[20];
				int length = 0;
				int intValue = (int) va_arg(argument, unsigned int);

				if (intValue <= INT_MAX)
				{
					if (intValue < 0)
					{
						intValue *= -1;
					}

					length = print_number(intValue, array, 10, sizeof(array));

					write(1, array, length);
					counter += length;
				}
				else
				{
					return (-1);
				}
			}
			else if (*format == 'o')
			{
				unsigned long int octValue = (unsigned long int) va_arg(argument, unsigned long int);

				if (octValue <= ULONG_MAX)
				{
					char array[20];
					int length = print_octal(octValue, array, sizeof(array));

					write(1, array, length);
					counter += length;
				}
				else
				{
					return (-1);
				}
			}
			else if (*format == 'x' || *format == 'X')
			{
				unsigned long int hexValue = (unsigned long int) va_arg(argument, unsigned long int);

				if (hexValue <= ULONG_MAX)
				{
					char array[20];
					int length = print_hex(hexValue, array, sizeof(array));

					if (*format == 'X')
					{
						int i = 0;

						for (i = 0; i < length; i++)
						{
							if (array[i] >= 'a' && array[i] <= 'f')
							{
								array[i] = array[i] - 'a' + 'A';
							}
						}
					}
					write(1, array, length);
					counter += length;
				}
				else
				{
					return (-1);
				}
			}
			else if (*format == '\0')
			{
				return (-1);
			}
			else if (*format == 'p')
			{
				unsigned long int hexValue = (unsigned long int) va_arg(argument, unsigned long int);

				if (hexValue <= ULONG_MAX)
				{
					char array[20];
					int length = print_hex(hexValue, array, sizeof(array));

					_putchar('0');
					_putchar('x');
					write(1, array, length);
					counter += length;
				}
				else
				{
					return (-1);
				}
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				counter += 2;
			}
		}
		format++;
	}
	va_end(argument);
	return (counter);
}

