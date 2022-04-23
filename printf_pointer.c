#include "main.h"

/**
  * printf_pointer - prints a hexadecimal number
  * @arg: an argument
  * Return: length
  */

int printf_pointer(va_list arg)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(arg, void*);
	if (p == NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
