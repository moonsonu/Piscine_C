/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:08:35 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/05 19:36:37 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*rc;
	int		l;
	int		i;

	i = 0;
	l = ft_strlen(src);
	rc = (char *)malloc(sizeof(char) * l);
	if (rc == 0)
		return (rc);
	while (i < l - 1)
	{
		rc[i] = src[i];
		i++;
	}
	rc[i] = '\0';
	return (rc);
}
