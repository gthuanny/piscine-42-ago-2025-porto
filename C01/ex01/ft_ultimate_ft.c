/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:57:37 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/03 16:58:52 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int n;
	int *nbr8 = &n;
	int **nbr7 = &nbr8;
	int ***nbr6 = &nbr7;
	int ****nbr5 = &nbr6;
	int *****nbr4 = &nbr5;
	int ******nbr3 = &nbr4;
	int *******nbr2 = &nbr3;
	int ********nbr1 = &nbr2;
	int *********nbr = &nbr1;

	n = 4665;
	
	ft_ultimate_ft(nbr);
	printf("%d",n);	
}
