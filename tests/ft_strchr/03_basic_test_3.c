/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:50:29 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:50:30 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic3(void)
{
	if (test_strcmp(ft_strchr("efmwaurfas2384eRGDJSM,.", 'e'),
				test_strchr("efmwaurfas2384eRGDJSM,.", 'e')))
		return (-1);
	return (0);
}
