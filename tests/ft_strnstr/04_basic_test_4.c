/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:00:50 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:00:51 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic4(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "test", 100) != NULL)
		return (-1);
	return (0);
}
