/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:59:46 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:59:48 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncpy_null(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 30)))
		return (0);
	test_memset(dest, 'c', 30);
	if (test_strcmp(ft_strncpy(dest, "lorem ipsum dolor sit amet", 0),
				test_strncpy(dest, "lorem ipsum dolor sit amet", 0)))
	{
		free(dest);
		return (-1);
	}
	free(dest);
	return (0);
}
