/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:05:25 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 19:11:00 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int i;
	int yn;

	i = 0;
	while (str[i] != '\0')
	{
		yn = 0;
		if (str[i] >= '0' && str[i] <= '9')
			yn = 1;
		if (yn == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char str1[] = "";

	printf("%d", ft_str_is_numeric(str1));
	return (0);
}
