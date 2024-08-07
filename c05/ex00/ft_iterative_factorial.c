/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:36:28 by oel-mado          #+#    #+#             */
/*   Updated: 2024/08/06 20:16:17 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}

/*int main(){
	printf("%d", ft_iterative_factorial(0));
}*/