/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 14:31:51 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/30 15:24:11 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
		
	else return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}

int main(void)
{
	int a;
	
	a = ft_fibonacci(6);
	printf("%d", a);
	return (0);
}
