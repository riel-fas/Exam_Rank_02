#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr <= 9)
	{
		nbr = nbr % 10 + '0';
		write(1, &nbr, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
		ft_putnbr(ac - 1);
	write(1, "\n", 1);
}
