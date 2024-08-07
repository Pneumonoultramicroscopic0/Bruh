/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:53:34 by oel-mado          #+#    #+#             */
/*   Updated: 2024/08/01 10:56:13 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j + 1 <= nb)
			dest[i + j] = src[j];
		else
			dest[i + j] = '\0';
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main(){
    char t1[99] = "123456789";
    char t2[] = "1234567";
    printf("%s", ft_strncat(t1, t2, 20));
}*/
