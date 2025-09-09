/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:43:08 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/09 16:43:39 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb *= ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(16, -1));
	printf("%d\n", ft_recursive_power(16, 0));
	printf("%d\n", ft_recursive_power(3, 3));
	return (0);
}*/
