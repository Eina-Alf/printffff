#include "main.h"

int print_u(va_list ar_list)
{
    int number = va_arg(ar_list, int);
    return(abs(number));
}


int print_o(va_list ar_list)
{
    unsigned int num = va_arg(ar_list, unsigned int);
	unsigned int copia;
	char *octa;
	int i, i2 = 0, contame = 0;

	if (num == 0)
		return (_putchar('0'));
	for (copia = num; copia != 0; i2++)
	{
		copia = copia / 8;
	}
	octa = malloc(i2);
	if (!octa)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}
	for (i = 0; i < i2 && octa[i] == '0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(octa[i]);
		contame++;
	}
	free(octa);
	return (contame);
}

int print_x(va_list ar_list)
{
    unsigned int num = va_arg(ar_list, unsigned int);
	unsigned int num2;
	int i, i2, copy, contame = 0;
	char *numhex;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; contame++)
	{
		num2 = num2 / 16;
	}
	numhex = malloc(contame);
	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			numhex[i] = copy + '0';
		else
			numhex[i] = copy - 10  + 'a';
		num = num / 16;
	}
	for (i2 = i - 1; i2 >= 0; i2--)
		_putchar(numhex[i2]);
	free(numhex);
	return (contame);
}

int print_X(va_list ar_list)
{
    unsigned int NUM = va_arg(ar_list, unsigned int);
	unsigned int NUM2;
	int I, I2, COPY, CONTAME = 0;
	char *NUMHEX;

	if (NUM == 0)
		return (_putchar('0'));
	for (NUM2 = NUM; NUM2 != 0; CONTAME++)
	{
		NUM2 = NUM2 / 16;
	}
	NUMHEX = malloc(CONTAME);
	for (I = 0; NUM != 0; I++)
	{
		COPY = NUM % 16;
		if (COPY < 10)
			NUMHEX[I] = COPY + '0';
		else
			NUMHEX[I] = COPY - 10 + 'A';
		NUM = NUM / 16;
	}
	for (I2 = I - 1; I2 >= 0; I2--)
		_putchar(NUMHEX[I2]);
	free(NUMHEX);
	return (CONTAME);
}
