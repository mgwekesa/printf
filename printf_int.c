#include "main.h"

/**
  * printf_int - prints an unsigned integer
  * @arg: argument
  * Return: length
  */

int printf_int(va_list arg)
{
	int n = va_arg(arg, int);
	int num;
	int last = n % 10;
	int digit;
	int len = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		len++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num /= 10;
		}

		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			len++;
		}
	}
	_putchar(last + '0');

	return (len);
}

/**
  * printf_unsigned - prints an unsigned integer
  * @arg: argument
  * Return: length
  */

int printf_unsigned(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int num;
	int last = n % 10;
	int digit;
	int i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num /= 10;
		}

		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

