/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 09:58:02 by mariaalm          #+#    #+#             */
/*   Updated: 2025/09/11 17:48:09 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	med;
	int	*result;

	if (min >= max)
		return (0);
	med = max - min;
	result = malloc(sizeof(int) * (med));
	if (result == NULL)
		return (NULL);
	med = 0;
	while (max > min)
	{
		result[med] = min;
		min++;
		med++;
	}
	return (result);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
    printf("\n");
    return (0);
}
*/
