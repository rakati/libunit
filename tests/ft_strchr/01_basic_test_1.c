/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:50:16 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:50:18 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic1(void)
{
	if (test_strcmp(ft_strchr("abcdef", 'd'), test_strchr("abcdef", 'd')))
		return (-1);
	return (0);
}
