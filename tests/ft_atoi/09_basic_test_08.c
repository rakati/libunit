/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_basic_test_08.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:46:56 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:46:58 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		atoi_basic9(void)
{
	if (ft_atoi("-4886") != -4886)
		return (-1);
	return (0);
}
