#include "main.h"
/**
 *print_alphabet_x10 - Print the alphabet 10 times
 *void
 *Description: Display the alphabet in lowercase
 *10 times
 *Return: void
 */
void print_alphabet_x10(void)
{
	int cont1, cont2;

	cont1 = 97;

	cont2 = 0;

	while (cont2 <= 9)
	{
		while (cont1 <= 122)
		{
			_putchar(cont1);
			cont1++;
		}
		_putchar('\n');
		cont1 = 97;
	cont2++;
	}

}