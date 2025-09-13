/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:01:49 by mariaalm          #+#    #+#             */
/*   Updated: 2025/09/11 18:04:15 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	med;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	med = max - min;
	result = malloc(sizeof(int) * (med));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	med = 0;
	while (max > min)
	{
		result[med] = min;
		med++;
		min++;
	}
	return (med);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;
	
	i = 0;
	min = 6;
	max = 13;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d ",tab[i]);
		i++;
	}
	printf("\n");
    return (0);
}
*/
