/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feherrer <feherrer@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:13:19 by feherrer          #+#    #+#             */
/*   Updated: 2022/07/12 19:03:14 by feherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_print_numbers(void)
{
	int	cero;
	int	nueve;

	cero = 48;
	nueve = 57;
	while (cero <= nueve && nueve >= cero)
	{
		write(1, &cero, 1);
		cero++;
	}
}
