/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null_test_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:14:18 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:14:22 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_null3(void)
{
	if (test_strcmp(ft_strstr("", ""), test_strstr("", "")))
		return (-1);
	return (0);
}
