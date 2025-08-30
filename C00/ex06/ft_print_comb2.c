/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:44:57 by gde-cast          #+#    #+#             */
/*   Updated: 2025/08/30 16:46:23 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		first;
	int		second;
	char	temporary;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			temporary = first / 10 + '0';
			write(1, &temporary, 1);
			temporary = first % 10 + '0';
			write(1, &temporary, 1);
			write(1, " ", 1);
			temporary = second / 10 + '0';
			write(1, &temporary, 1);
			temporary = second % 10 + '0';
			write(1, &temporary, 1);
			if (first < 98)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
/*
int main(void)
{
    ft_print_comb2();
    return(0);
}
*/
