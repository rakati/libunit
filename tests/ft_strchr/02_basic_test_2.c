/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:50:22 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:50:25 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic2(void)
{
	if (test_strcmp(ft_strchr("efmwaurfas2384RGDJSM,.", '.'),
				test_strchr("efmwaurfas2384RGDJSM,.", '.')))
		return (-1);
	return (0);
}
