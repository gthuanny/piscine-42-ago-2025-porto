#include <stdio.h>

int occ_a(char *str)
{
	int i = 0;
	int count = 0;

	while(str[i])
	{
		if(str[i] == 'A')
			count++;
		i++;
	}
	return(count);
}

int main(void)
{
	char str[] = "AaHAA";
	printf("%i\n", occ_a(str));
}

//conta quantos 'A' tem na minha string, nao lembro se precisa de uma quebra de linha
