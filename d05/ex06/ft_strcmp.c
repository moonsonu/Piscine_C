/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 13:51:37 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 15:35:44 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s1 < *s2)
			return (*s1 - *s2);
		if (*s1 > *s2)
			return (*s1 - *s2);
		if (*s1 = '\0' || *s2 = '\0')
			return (0);
	}
	return (0);
}

int		main(void)
{
	char s1_1[20] = "ate";
	char s2_1[20] = "apple";
	char result;

	result = ft_strcmp(s1_1, s2_1);
	printf("%d", result);
	return (0);
}
