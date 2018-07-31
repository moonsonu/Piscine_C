/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 20:29:28 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 20:48:23 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
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
	ft_strlcat(dest1, src1, c);
	printf("%s\n", dest1);
	printf("%s", src1);
	return (0);
}

