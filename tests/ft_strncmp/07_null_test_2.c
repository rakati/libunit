/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null_test_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:58:49 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:58:50 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_null2(void)
{
	if (ft_strncmp("asasfeqtrwdfjbcxaEWTERUG", "", 15) !=
			test_strncmp("asasfeqtrwdfjbcxaEWTERUG", "", 15))
		return (-1);
	return (0);
}
