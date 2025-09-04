/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:47:56 by gde-cast          #+#    #+#             */
/*   Updated: 2025/09/04 10:48:18 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main (void)
{
	char	*src = "welcome to the future";
//	char	*dest = "goodbye to the future"; 
	char	dest[40] = "goodbye to the future";

	unsigned int	len = 30;

	ft_strncpy(dest, src, len);
	printf ("origen %s\n", src);
	printf ("destiny %s\n", dest);
	return (0);
}*/
