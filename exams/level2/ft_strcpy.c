/*======================================ft_strcpy.txt=========================================
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: None
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
==========================================================================================
*/
#include <unistd.h> 

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++; 
	}
	(s1[i] = '\0'); 

	return (s1);

}

#include <stdio.h>

int	main()
{
	char str_src[] = "ola 42";
	char str_dest[40]; 

	printf("string destino antes: %s\n", str_dest);
	ft_strcpy(str_dest, str_src);
	printf("string de destino depois: %s\n", str_dest);

	return 0;
}
