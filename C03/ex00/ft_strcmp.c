/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:10:05 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/04 17:10:28 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h> 

int 	main()
{
	printf("%d", ft_strcmp("Caralho", "Caralho"));
	printf("\n%d", ft_strcmp("caralho", "carvalho"));
	printf("\n%d", ft_strcmp("caralho", "caralhinho"));
}*/
