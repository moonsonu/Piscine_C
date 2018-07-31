/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:23:13 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/07 00:03:38 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*alpha(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			j = (((str[i]) + 42) - 26);
			if (j > 90)
				j = j - 26;
			str[i] = j;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			j = (((str[i]) + 42) - 26);
			if (j > 122)
				j = j - 26;
			str[i] = j;
		}
		i++;
	}
	return (str);
}

char	ft_rot42(char *str)
{
	alpha(str);
	return (str);
}
