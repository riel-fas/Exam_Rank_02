#include <unistd.h>

int main(int ac,char **av)
{
	int i = 0;
	int	j = 0;
	int	x = 0;
	int	len = 0;
	if (ac == 3)
	{
		while(av[1][len])
			len++;
		while(av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				x++;
				i++;
			}
			j++;
		}
		if (len == x)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
