/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:59:23 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:59:24 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncpy_basic2(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 50)))
		return (0);
	test_memset(dest, 'c', 50);
	if (test_strcmp(ft_strncpy(dest, "lorem ipsum dolor sit amet", 30),
				test_strncpy(dest, "lorem ipsum dolor sit amet", 30)))
	{
		free(dest);
		return (-1);
	}
	free(dest);
	return (0);
}
