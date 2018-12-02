/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:51:48 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:51:49 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_basic2(void)
{
	if (test_strcmp(ft_strdup("Lorem ipsum"), "Lorem ipsum"))
		return (-1);
	return (0);
}
