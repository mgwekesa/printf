#include "main.h"

/**
  * printf_HEX_aux - prints a hexadecimal
  * @arg: argument
  * Return: length
  */

int printf_HEX_aux(unsigned int arg)
{
	long int i;
	long int *arr;
	long int len = 0;
	unsigned long int tmp = arg;

	while (arg / 16 != 0)
	{
		arg /= 16;
		len++;
	}
	len++;
	arr = malloc(len * sizeof(unsigned long int));

	i = 0;
	while (i < len)
	{
		arr[i] = tmp % 16;
		tmp /= 16;
		i++;
	}

	i = len - 1;
	while (i >= 0)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);
	return (len);
}
