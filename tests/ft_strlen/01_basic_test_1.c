/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 01:26:14 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 19:54:52 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strlen_basic1(void)
{
	if (ft_strlen("Hello World!") != test_strlen("Hello World!"))
		return (-1);
	return (0);
}
