#include "main.h"

/**
  * printf_bin - prints a binary number
  * @arg: argument
  * Return: 1
  */

int printf_bin(va_list arg)
{
	int flag = 0;
	int cont = 0;
	int i;
	int a = 1;
	int b;
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int p;

	i = 0;
	while (i < 32)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
		i++;
	}

	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
