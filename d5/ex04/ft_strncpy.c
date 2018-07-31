/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:17:51 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 12:48:55 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
}

int		main(void)
{
	char src1[10] = "abcde";
	char dest1[10] = "zzzz";
	int c;

	c = 2;
	ft_strncpy(dest1, src1, c);
	printf("%s\n", dest1);
	printf("%s", src1);
	return (0);
}
