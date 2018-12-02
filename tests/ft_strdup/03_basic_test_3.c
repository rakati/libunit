/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:53:51 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:53:52 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_basic3(void)
{
	if (test_strcmp(ft_strdup("Lorem ipsumLorem ipsum"),
				"Lorem ipsumLorem ipsum"))
		return (-1);
	return (0);
}
