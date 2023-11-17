#include "main.h"
/**
  * printing_unsigned - prints integer
  * @args: the argument to be be printed
  * Return: an integer value
  */
int printing_unsigned(va_list args)
{
	unsigned int v = va_arg(args, unsigned int);
	int num, t_last = v % 10, digit, exp = 1;
	int  i = 1;

	v /= 10;
	num = v;

	if (t_last < 0)
	{
		_putchar('-');
		num = -num;
		v = -v;
		t_last = -t_last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = v;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(t_last + '0');

	return (i);
}
