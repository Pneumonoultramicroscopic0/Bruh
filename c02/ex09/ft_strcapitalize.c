/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:26:45 by oel-mado          #+#    #+#             */
/*   Updated: 2024/08/01 13:49:25 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') 
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z') 
					|| (str[i -1] >= '0' && str[i - 1] <= '9')))
			{
				str[i] = str[i] - 32;
			}
			i++;
		}
		i++;
	}
	return (str);
}
/*int main()
{
    char str[] = "sf laysam7 wlahila ghansitha wlah man3awd ;_;";
    printf("%s", ft_strcapitalize(str));
    char str0[] = "i90g3702uyh uhvv748nh7tyh";
    printf("%s", ft_strcapitalize(str0));
}*/
