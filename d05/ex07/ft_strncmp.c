/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 14:16:39 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 15:36:15 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
	}
	return (0);
}

int		main(void)
{
	char s1_1[20] = "aps";
	char s2_1[20] = "apple";
	int c;
	int result;

	c = 3;
	result = ft_strncmp(s1_1, s2_1, c);
	printf("%d", result);
	return (0);
}
