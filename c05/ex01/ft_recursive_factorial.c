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