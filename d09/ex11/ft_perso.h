/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 10:59:21 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/07 11:11:36 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS		1
#include <string.h>

typedef struct			s_perso
	{
		char	name[20];
		float	life;
		int		age;
		char	profession[100];
	}					t_perso
#endif

