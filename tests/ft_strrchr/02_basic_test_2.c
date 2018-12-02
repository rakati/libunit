/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:01:38 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:01:39 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic2(void)
{
	if (test_strcmp(ft_strrchr("efmwaurfas2384RGDJSM,.", '.'),
				test_strrchr("efmwaurfas2384RGDJSM,.", '.')))
		return (-1);
	return (0);
}
