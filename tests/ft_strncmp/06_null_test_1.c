/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:58:42 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:58:43 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_null1(void)
{
	if (ft_strncmp("", "asasfeqtrwdfjbcxaEWTERUG", 2) !=
			test_strncmp("", "asasfeqtrwdfjbcxaEWTERUG", 2))
		return (-1);
	return (0);
}
