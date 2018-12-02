/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:54:58 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:55:00 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strlen_basic2(void)
{
	if (ft_strlen("0123456789abcdefghijklmnopqrstuvwxyz") !=
			test_strlen("0123456789abcdefghijklmnopqrstuvwxyz"))
		return (-1);
	return (0);
}
