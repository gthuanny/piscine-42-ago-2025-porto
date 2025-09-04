/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:24:44 by kde-arru          #+#    #+#             */
/*   Updated: 2025/08/30 16:34:05 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	coluna(int y, char carc_1, char carc_2, char carc_3)
{
	int	i;
	
	ft_putchar(carc_1);
	while (i <= y)
	{
		if (i == 1)
		{
			ft_putchar(carc_1);
		}
		else if (i == y)
			{
				ft_putchar(carc_3);
			}
		else
		{
			ft_putchar(carc_2);
		}
		i++;
	}
	ft_putchar("/n");
}

void	rush01(int x, int y)
{
	int 

}
