#include <unistd.h> 
#include <stdio.h>

void	ft_add(int *ptr, int n)
{
	*ptr += n; //um ponteiro é igual a um ponteiro mais o inteiro 
		   // =+ é um operador de atribuição, adiciona o valor á sua direita
}

/*int	main(void)
{
	int	nbr;

	nbr = 10;
	printf("%d\n", nbr);	
	ft_add(&nbr, 10);
	printf("%d\n", nbr);	
	return (0);
}*/

#include	<unistd.h>
#include	<stdio.h>

void	ft_add(int *ptr, int n)
{
	*ptr = *ptr + n; //essa forma também é valida, porém outra forma de escrever
}
