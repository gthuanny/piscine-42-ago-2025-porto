Assignment name  : odd
Expected files   : odd.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program That displays odd numbers, followed by a new line.

Example:

$> ./odd 
13579
$> ./odd | cat -e
13579$
==========================================================================================

#include <unistd.h>

int	main(void)
{
	write(1,"13579\n",6);
}
