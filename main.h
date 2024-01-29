#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_number(int number, char *array, int base, int size);
int decimalToBinary(int decimalNum);
int _puts(signed char *str);
int _putchar(char c);
int print_octal(unsigned long int num, char *array, int size);
int print_hex(unsigned long int num, char *array, int size);
void reverse_string(char *str, int len);

#endif

