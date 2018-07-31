/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:02:31 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 18:30:13 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	spec_char(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	if (a >= 'A' && a <='Z')
		return (1);
	if (a >= '0' && a <='9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (str[i] >= 'A' && str[i] <='Z')
			str[i] += 32;
		if (spec_char(str[i - 1]) == 0 && spec_char(str[i]) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "sAlut, comMent tu vas ? 42mots quaTante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str1));
	return (0);
}
