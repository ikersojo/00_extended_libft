/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_to_intlst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:20:18 by isojo-go          #+#    #+#             */
/*   Updated: 2022/11/19 09:34:06 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
Takes as parameters the arguments provided to main and creates a new list of
integers. Returns a pointer to the first item of the newly created list.
It does not handle input errors.
---------------------------------------------------------------------------- */
t_intlst	*ft_args_to_intlst(int argc, char **argv)
{
	int			i;
	t_intlst	*a;
	t_intlst	*tmp;

	i = 1;
	while (i < argc)
	{
		if (i == 1)
			a = ft_intlst_new(ft_atoi((*(argv + i))));
		else
		{
			tmp = ft_intlst_new(ft_atoi((*(argv + i))));
			ft_intlst_addback(&a, tmp);
		}
		i++;
	}
	return (a);
}
