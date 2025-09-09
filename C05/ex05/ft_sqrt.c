/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:46:08 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/09 16:47:00 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(-1));
	return (0);
}*/
