/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 20:47:05 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/29 22:06:08 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i > j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	i--;
	j++;
	}
	return (str);
}

int		main()
{
	char str1[] = "abcde";
	printf("%s", ft_strrev(str1));
	return (0);
}
