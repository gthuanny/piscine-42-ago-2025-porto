/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:37:24 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/03 14:42:35 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 5;
	printf("a: %i, b: %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a : %i, b : %i\n", a, b);
}
*/
