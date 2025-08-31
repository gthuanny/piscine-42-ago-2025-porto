/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:27:14 by gde-cast          #+#    #+#             */
/*   Updated: 2025/08/31 11:36:36 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P\n", 2);
	else if (n < 0)
		write(1, "N\n", 2);
}
/*int	main (void)
{
	ft_is_negative (-7);
	ft_is_negative (10);
	ft_is_negative (-4568);
	return (0);
}*/
