#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0;

	if(ac == 2)
	{
		while(av[1][i])
		{
			if(i != 0 && i % 3 == 0 && i % 5 == 0)
				av[1][i] = '5';
			else if(i != 0 && i % 3 == 0)
				av[1][i] = '5';
			else if(i != 0 && i % 5 == 0)
				av[1][i] = '3';
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

//imprime 5 se a string e múltipla de 3, imprime 3 se a steing é múltipla de 5 e imprime 5 se a string é múltipla de 3 e 5
//
//
//teste: abc5e35hi53l5no
//output: abc5e35hi53l5no

/*0  1  2  3  4  5  6  7  8  9 10 11 12 13 14
 a  b  c  d  e  f  g  h  i  j  k  l  m  n  o
Regras aplicadas:
i = 3 (d): múltiplo de 3 → troca por '5'

i = 5 (f): múltiplo de 5 → troca por '3'

i = 6 (g): múltiplo de 3 → troca por '5'

i = 9 (j): múltiplo de 3 → troca por '5'

i = 10 (k): múltiplo de 5 → troca por '3'

i = 12 (m): múltiplo de 3 → troca por '5'

i = 13 (n): nada

i = 14 (o): múltiplo de 5 (14 % 5 == 4) → nada
*/
