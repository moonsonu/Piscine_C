/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:11:21 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 19:16:22 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;
	int yn;

	i = 0;
	while (str[i] != '\0')
	{
		yn = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			yn = 1;
		if (yn == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char str1[] = "cds";
	
	printf("%d", ft_str_is_lowercase(str1));
	return (0);
}

