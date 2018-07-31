/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 20:29:28 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/04 11:01:54 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] != '\0')
		j++;
	while (src[k] != '\0')
		k++;
	if (size != 0)
	{
		while (src[i] != '\0' && ((j + i) < (size - 1)))
		{
			dest[i + j] = src[i];
			i++;
		}
	}
	dest[i + j] = '\0';
	if (j < size)
		return (k + j);
	else
		return (k + size);
}
