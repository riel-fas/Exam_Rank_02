#include <stdlib.h>
#include <stdio.h>
char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (s2 && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int len = 0;
	char **split;
	if(!str)
	{
		split = (char **)malloc(sizeof(char *));
		split[0] = NULL;
		return (split);
	}
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			j++;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	split = (char **)malloc((j + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (i > j)
		{
			split[len] = (char *)malloc(sizeof(char *) * ((i - j) + 1));
			ft_strncpy(split[len++], &str[j], i - j);
		}
	}
	split[len] = NULL;
	return split;
}
