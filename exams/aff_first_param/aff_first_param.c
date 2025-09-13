#include <unistd.h>

int	main(int argc, char *argv[])
{
	int  i;

	i = 0;
	if (argc > 1) 
	{ 
		while (argv[1][i])
		{
			write(1, &argv[1][i],1);
			i++;
		}
		write(1, "\n", 1);
	}
	else	
	{
		write(1,"\n",1);
	}
	return(0);
}
//outra forma de fazer - criando um putstr para imprimir a string
/*#include <unistd.h> 

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++
	}
}

int	main (int argc, char *argv[]) 
{
	int 	i
	
	i = 0;

	if (argc > 1)
		ft_putstr(argv[argc - 1]);
}*/
