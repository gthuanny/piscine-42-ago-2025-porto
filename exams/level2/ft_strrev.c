======================================ft_strrev.txt=========================================
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
==========================================================================================

#include <unistd.h>

char	*ft_strrev(char *str) 
{
	int i = 0;
	int len = 0; 
	
	while(str[len] != '\0')
	{
		len++;
	}
}

