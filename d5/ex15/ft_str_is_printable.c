/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:29:20 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 19:36:04 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;
	int yn;

	while (str[i] != '\0')
	{
		yn = 0;
		if (str[i] >= 32 && str[i] <= 127)
			yn = 1;
		if (yn == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char str1[] = "sdf$%#";

	printf("%d", ft_str_is_printable(str1));
	return (0);
}
