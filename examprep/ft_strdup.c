/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:35:41 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/15 22:40:24 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*rc;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(src);
	rc = (char*)malloc(sizeof(char) * l);
	while (src[i] != '\0')
	{
		rc[i] = src[i];
		i++;
	}
	rc[i] = '\0';
	return (rc);
}

int		main()
{
	char *src;
	char *rc;

	src = "abc";
	rc = ft_strdup(src);
	printf("%s\n", rc);
	return (0);
}
