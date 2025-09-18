/*assignment name  : interval_spaces
Expected files   : interval_spaces.c
Allowed functions: write
--------------------------------------------------------------------------------

create a program that writes three whitespaces between each character in an argument,

if the number of arguments is different than 2 the program will return a newline

$> ./interval_spaces "abc" | cat -e
a   b   c$
$> ./interval_spaces "dubO a POIL" "ok" | cat -e
$
==========================================================================================
*/
#include <unistd.h>

int	main(int argc, char *argv[]) 
{
	int i = 0;

	if (argc == 2)	
	{
		while(argv[1][i])
		{
			write(1, &argv[1][i],1);
			if (argv[1][i +1]) 
			{
				write(1,"   ",3);
			}
		i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
