/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:49:33 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 13:51:00 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *temp = to_find;
	int cout = -1;

	while (*str)
	{
		if (*str != *to_find)
		{
			cout = -1;
			to_find = temp;
		}
		if (*str == *to_find)
		{
			to_find++;
			cout++;
			if (*to_find  == '\0')
				return str - cout;
		}
		str++;
		if (*str == '\0')
			return (0);
	}
	return(0);
}

int		main(void)
{
	char str1[20] = "abcde";
	char *to_find1 = "cd";
	char *result;

	result = ft_strstr(str1, to_find1);
	printf("%s\n", result);
	return (0);
}
