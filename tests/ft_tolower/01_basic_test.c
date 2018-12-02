/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:14:52 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:14:55 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		tolower_basic(void)
{
	int i;

	i = 1;
	while (i <= 127)
	{
		if (ft_tolower(i) != test_tolower(i))
			return (-1);
		i++;
	}
	return (0);
}