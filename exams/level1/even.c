Assignment name  : even
Expected files   : even.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program That displays  even numbers, followed by a new line.

Example:

$> ./even
0246810
$> ./even | cat -e
0246810$
==========================================================================================

#include <unistd.h> 

int	main(void)
{
	write(1, "0246810\n",8)
}
