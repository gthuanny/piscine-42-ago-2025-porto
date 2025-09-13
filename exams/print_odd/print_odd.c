#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0;

	if(ac == 2)
	{
		while(av[1][i])
		{
			if(i % 2 != 0)
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

//escreva um programa que receba uma string e imprima apenas cada caracter na posicao impar na string fornecida
//se o numero de parametros nao for 1, de uma quebra de linha
