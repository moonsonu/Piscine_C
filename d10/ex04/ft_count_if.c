/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 15:23:13 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/11 13:03:28 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		rc;

	i = 0;
	rc = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			rc++;
		i++;
	}
	return (rc);
}
