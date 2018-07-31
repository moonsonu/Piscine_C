/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:49:33 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/04 09:29:24 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*t;
	int		c;

	t = to_find;
	c = -1;
	while (*str)
	{
		if (t[0] == '\0')
			return (str);
		if (*str != *to_find)
			to_find = t;
		if (*str == *to_find)
		{
			to_find++;
			c++;
			if (*to_find == '\0')
				return (str - c);
		}
		str++;
		if (*str == '\0')
			return (0);
	}
	return (0);
}
