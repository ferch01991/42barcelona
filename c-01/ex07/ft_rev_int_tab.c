/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feherrer <feherrer@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:57:45 by feherrer          #+#    #+#             */
/*   Updated: 2022/07/28 12:45:22 by feherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	arr;
	int	i;

	i = 0;
	while (i < size)
	{
		arr = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = arr;
		size--;
		i++;
	}
}
