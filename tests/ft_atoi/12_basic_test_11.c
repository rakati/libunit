/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_basic_test_11.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:47:21 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:47:23 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		atoi_basic12(void)
{
	if (ft_atoi("+-54") != 0)
		return (-1);
	return (0);
}
