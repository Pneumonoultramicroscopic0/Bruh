/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:05:20 by oel-mado          #+#    #+#             */
/*   Updated: 2024/08/02 11:11:08 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[0]);
	while (str[i + j] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}

/*int main(){
    char text[] = "l'mrja afdal 7oma fl3alam";
    char tf[]= "mrja";
    printf("%s", ft_strstr(text, tf));
}*/
