/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 20:29:28 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 20:58:56 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size);
}

int		main(void)
{
	char dest1[10] = "sdffgh";
	char src1[10] = "abce";
	int c;
	c = 2;
	ft_strlcpy(dest1, src1, c);
	printf("%s\n", dest1);
	printf("%s", src1);
	return (0);
}

