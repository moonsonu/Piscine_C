/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:16:44 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 19:21:37 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;
	int yn;

	i = 0;
	while (str[i] != '\0')
	{
		yn = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
			yn = 1;
		if (yn == 0)
			yn = 0;
		i++;
	}
	return (1);
}

int		main(void)
{
	char str1[] = "DCD";

	printf("%d", ft_str_is_uppercase(str1));
	return (0);
}
