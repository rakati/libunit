/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:00:17 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:00:20 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic1(void)
{
	if (test_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15),
				test_strnstr("lorem ipsum dolor sit amet", "ipsum", 15)))
		return (-1);
	return (0);
}
