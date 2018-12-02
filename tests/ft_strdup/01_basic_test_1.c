/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:51:41 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:51:43 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_basic1(void)
{
	if (test_strcmp(ft_strdup("Lorem ipsum dolor sit amet"),
				"Lorem ipsum dolor sit amet"))
		return (-1);
	return (0);
}
