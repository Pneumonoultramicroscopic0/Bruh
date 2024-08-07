/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:05:43 by oel-mado          #+#    #+#             */
/*   Updated: 2024/08/01 18:16:19 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	run;

	run = 0;
	while (str[run] != '\0')
	{
		run++;
	}
	return (run);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	merja;

	i = 0;
	merja = ft_strlen(src);
	while (size - 1 > i && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (size - 1 == i)
	{
		dest[i] = '\0';
		i++;
	}
	dest[size - 1] = '\0';
	return (merja);
}

/*#include <stdio.h>
int main(){
    char txt0[7];
    char txt[] = "qwertyuiopasdfghjklzxcvbnm";
    printf("%u", ft_strlcpy(txt0, txt, 7));
    printf("\n%s\n%s", txt, txt0);
}*/
