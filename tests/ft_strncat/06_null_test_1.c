/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:57:25 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:57:27 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_null(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (-1);
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, "", 5), test_strncat(dest, "", 5)))
		return (-1);
	return (0);
}
