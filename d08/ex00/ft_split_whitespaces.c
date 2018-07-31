/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 22:25:24 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/06 16:26:55 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		counter(char *str)
{
	int i;
	int rc;

	i = 0;
	rc = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (str[i] != '\0')
				i++;
			else
				break ;
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		rc++;
	}
	return (rc);
}

char	*string(char *str, int *index)
{
	char	*rc;
	int		i;
	int		f;
	int		l;

	f = *index;
	i = f;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		if (str[i] != '\0')
			i++;
		else
			break ;
	}
	l = i;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	*index = i;
	i = -1;
	rc = (char*)malloc(l - f + 1);
	while (++i < l - f)
		rc[i] = str[f + i];
	rc[i] = '\0';
	return (rc);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**rc;
	int		c;
	int		index;

	c = counter(str);
	rc = (char**)malloc(sizeof(char*) * (c + 1));
	i = 0;
	index = 0;
	while (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		str++;
	while (str[i] != '\0')
		rc[index++] = string(str, &i);
	rc[index] = 0;
	return (rc);
}
