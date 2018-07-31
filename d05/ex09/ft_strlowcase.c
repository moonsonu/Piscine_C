/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:56:55 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 16:02:06 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >='A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "EFxfdgSFDvf";
	printf("%s", ft_strlowcase(str1));
	return (0);
}
