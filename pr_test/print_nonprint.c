#include "main.h"

/**
 * print_nonprint - print string and nonprintable char in hex
 * @args: passed arguments
 *
 * Return: number of string prints
 */

int print_nonprint(va_list args)
{
	int index1, index2 = 0;
	char *s;

	s = va_arg(args, char *);
	for (index1 = 0; s[index1] != '\0'; index1++)
	{
			_putchar('\\');
			_putchar('x');
			index2 += 2;
			if (s[index1] < 16)
			{
				_putchar('0');
				index2++;
			}
			index2 = print_nonprint(s[index1]);
	}
	else
	{
		_putchar(s[index1]);
		index2++;
	}
	if (s == NULL)
	{
		s = "(null)";
	}
	return (index2);
}
