/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:01:46 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/05 19:39:08 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*rc;
	int		i;
	int		l;
	int		k;
	int		j;

	i = -1;
	l = 0;
	k = 0;
	while (++i < argc)
		l += ft_strlen(argv[i]) + 1;
	rc = (char*)malloc(sizeof(char) * l);
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (++j < ft_strlen(argv[i]))
			rc[j + k] = argv[i][j];
		rc[j + k] = '\n';
		k += j + 1;
	}
	rc[k - 1] = '\0';
	return (rc);
}
