#include <unistd.h>

int main(int ac, char  *av[])
{
	int i = 0;
	int tab[256] = {0};
	if(ac == 3)
	{
		while (av[2][i])
			tab[(int)av[2][i++]] = 1;
		i = 0;
		while (av[1][i])
		{
			if (tab[(int)av[1][i]] == 1)
			{
				tab[(int)av[1][i]] = 0;
				write(1,&av[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
