/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:59:29 by mariaalm          #+#    #+#             */
/*   Updated: 2025/09/11 18:03:59 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_length(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i != size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

void	add_strings(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			result[k++] = sep[j++];
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total = total_length(size, strs, sep);
	result = malloc(sizeof(char) * (total + 1));
	if (!result)
		return (NULL);
	add_strings(result, size, strs, sep);
	return (result);
}
/*
int	main(void)
{
	char *strs[] = {"Hello", "world", "hi."};
	char *sep = ", ";
	int size = 3;

	char *result = ft_strjoin(size, strs, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result); 
	}
	return 0;
}
*/
