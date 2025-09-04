/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:46:04 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/04 10:47:32 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*src = "welcome to the future of your life";
	char	dest [30];

	ft_strcpy(dest, src);
	printf ("origen %s\n", src);
	printf ("destiny %s\n", dest);
	return (0);
}*/
/*The strcpy function copies string str2 into str1 
and returns the value of str1.
On the other hand, strncpy copies the n characters of string str2 into str1 
and returns the value of str1.*/
