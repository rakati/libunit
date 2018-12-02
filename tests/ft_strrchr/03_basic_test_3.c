/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:01:43 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:01:45 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic3(void)
{
	if (test_strcmp(ft_strrchr("efmwaurfas2384eRGDJSM,.", 'e'),
				test_strrchr("efmwaurfas2384eRGDJSM,.", 'e')))
		return (-1);
	return (0);
}
