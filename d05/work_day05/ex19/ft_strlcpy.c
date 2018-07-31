/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:16:08 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/04 10:43:31 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	k = i;
	i = 0;
	if (size != 0)
	{
		while ((i < (size - 1)) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
		dest[j] = '\0';
	return (k);
}
