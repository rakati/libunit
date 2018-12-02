/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:00:56 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:00:57 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_null(void)
{
	if (test_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "", 100),
				test_strnstr("lorem ipsum dolor sit amet", "", 100)))
		return (-1);
	return (0);
}
