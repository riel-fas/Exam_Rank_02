#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;
	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i])
			&& (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int j = 0;
		while (++j < ac)
			str_capitalizer(av[j]);
	}
	else
		write(1, "\n", 1);
}
