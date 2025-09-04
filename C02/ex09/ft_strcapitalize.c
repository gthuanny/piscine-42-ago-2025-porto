/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:23:30 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/04 11:27:03 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	inside_word;

	i = 0;
	inside_word = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (inside_word == 0 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (inside_word == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			inside_word = 1;
		}
		else
			inside_word = 0;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str[] = "welcome to your future 2025;twenty-five;two+thousand ";
    printf("%s\n", ft_strcapitalize(str));
}
*/
