/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrause <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:40:33 by ekrause           #+#    #+#             */
/*   Updated: 2023/11/25 09:41:59 by ekrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_i(int n)
{
	long int	nb;

	nb = n;
	if (ft_putnbr(nb) == -1)
		return (-1);
	return (ft_count_dix(nb));
}
