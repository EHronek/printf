#include "main.h"
/**
  * printing_binary - it should convert a decimal to binary
  * @val: the argument
  * Return: an integer binary
  */
int printing_binary(va_list val)
{
	int t_flag = 0;
	int con = 0;
	unsigned int pt;
	int i, b;
	int a = 1;
	unsigned int num = va_arg(val, unsigned int);

	for (i = 0; i < 32; i++)
	{
		pt = ((a << (31 - i)) & num);
		if (pt >> (31 - i))
			t_flag = 1;
		if (t_flag)
		{
			b = pt >> (31 - i);
			_putchar(b + '0');
				con++;
		}
	}
	if (con == 0)
	{
		con++;
		_putchar(48);
	}
	return (con);
}
