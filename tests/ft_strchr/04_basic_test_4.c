/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:50:35 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:50:46 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic4(void)
{
	if (ft_strchr("efmwaurfas2384RGDJSM,.", 'x') != NULL)
		return (-1);
	return (0);
}
