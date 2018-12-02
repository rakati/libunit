/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:00:27 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:00:36 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic2(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "sit", 10) != NULL)
		return (-1);
	return (0);
}
