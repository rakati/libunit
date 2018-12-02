/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:01:28 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:01:29 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic1(void)
{
	if (test_strcmp(ft_strrchr("abcdef", 'd'), test_strrchr("abcdef", 'd')))
		return (-1);
	return (0);
}
