/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:46:47 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/07 00:04:05 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	char	str[3];
	int		a;
	int		b;
	int		temp;
	int		c;

	str[0] = i;
	str[1] = j;
	str[2] = k;
	a = 0;
	b = 1;
	while (str[b])
	{
		while (str[a] > str[b])
		{
			temp = str[b];
			str[b] = str[a];
			str[a] = temp;
		}
		a++;
		b++;
	}
	c = str[1];
	return (c);
}
