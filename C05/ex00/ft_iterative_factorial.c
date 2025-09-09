/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:42:13 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/09 16:32:25 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*#include <stdio.h>

int main (void)
{
	printf("%i", ft_iterative_factorial(3));
}*/
//outra forma de fazer:// 

/*int	ft_iterative_factorial(int nb) 
{
	int	i;
	
	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	nb--;
	while (nb > 0)
	{
		i *= nb;
		nb--; 
	}
	return (i);
}*/

/*int	main(void)
{
	int	n1;
	int	n2;

	n1 = 5;
	n2 = ft_iterative_factorial(n1);
	printf("%d", n2);
	return (0);
}*/
