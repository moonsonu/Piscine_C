/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:11:21 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 21:50:50 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
