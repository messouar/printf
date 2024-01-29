# Printf Function - Team Project
This team project is a custom-made **printf** function for the C programming language named **/_printf** . It has been optimized to handle various inputs and optional arguments, following the format conventions of the standard library function **printf**. This submission is part of the ALX software engineering course requirements for grading.

## **Synopsis**
The **\_printf()** function writes output to **stdout**, the standard output stream, with specified formats and options. It does not rely on any standard library files. The function uses a local buffer of 1024 bytes for printing, but it is capable of handling larger sets of data.

The **\_printf()** function returns the total number of characters printed to **stdout** (excluding the null byte at the end of strings) upon successful execution. In case of an output error, a negative value of -1 is returned.

## **Prototype:**
```c
int _printf(const char *format, ...);
```
The function has one mandatory format argument and an additional variable number of arguments.

## **Format of the Format String**
The format string is a character string enclosed in double quotes, composed of zero or more directives, ordinary characters (not %), and conversion specifications. Each conversion specification is introduced by the % character and ends with a conversion specifier. Between them, there may be optional flags, a field width, precision modifier, and length modifier.

## **Flag Characters**

|**Flag**| Description  |
|--|--|
|**#**| For **o** conversions the first character of the output string is made zero (by prefixing a 0 if it was not zero already).  For **x** and **X** conversions, a nonzero result has the string "**0x**" or "**0X**" respectively added. |
|**0**| (Not implemented yet) The  value should be zero padded. For **d**, **i**, **o**, **u**, **x**, and **X** the converted value is padded on the left with zeros. If the 0 and **-** flags both appear,the **0** flag is ignored. If a precision is given with a numeric conversion, the **0** flag is ignored.|
|**-**|(Minus sign, not implemented yet) The converted value is to be left adjusted on the field boundary, (Default is right justification) and  padded  with  blanks  in  the right rather than on the left with blanks or zeros. This flag overrides **0** if both are given.|
|' '| (Blank Space) The argument is padded with a single blank space before a positive number or empty string produced by a signed conversion.|
|**+**| A sign (+ or -) should always be placed before a number produced with a signed conversion.  By default, only negative numbers have this sign.|
## **The field width**
An optional precision, in the form of a period (.) followed by a decimal digit string. Determines the minimum number of digits for certain conversions or the maximum characters for string conversions. A character **\*** can be used, taking an argument as the precision value.

## **Length Modifiers**
|**Modifier**| Description|
|--|--|
|**l**| An integer conversion to a **long int** or **unsigned long int** argument.|
|**h**| An integer conversion to a **short int** or **unsigned short int** argument.|

## **Conversion Specifier**
|**Specifier**| Description|
|--|--|
|**d, i**| Convert the argument **int** to a signed decimal notation.|
|**o, u, x, X**|Convert the argument to unsigned octal (**o**), decimal (**u**), or hexadecimal (**x** and **X**).|
|**c**| Convert the **int** argument to an unsigned char and write the resulting character.|
|**s**| Expect a pointer type **char\*** to an array of characters; print characters until null byte ('\0').|
|**p**| Print a void pointer argument as hexadecimal, representing an address in memory.|
|**%**| Write the character '%'; no conversion is made.|
|**b**| Convert the argument to an unsigned int and print its binary representation (base 2).|
|**S**| Expect a pointer type **char***; print characters until null byte ('\0'). Non-printable characters are represented as **\x** followed by the ASCII code value in hexadecimal|
|**r**| Expect a pointer type **char***; print characters in reverse order until null byte ('\0').|
|**R**| Expect a pointer type **char***; encode characters to ROT13 and print until null byte (**'\0'**).|

## **Author**

# [Yassir BOUKHIMA](https://github.com/art-of-work)
# [Amine MESSOUAR](https://github.com/messouar)
