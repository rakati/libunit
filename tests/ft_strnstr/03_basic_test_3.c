/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:00:40 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:00:42 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic3(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0) != NULL)
		return (-1);
	return (0);
}
