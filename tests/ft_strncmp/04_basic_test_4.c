/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:58:23 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:58:24 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_basic4(void)
{
	if (ft_strncmp("zyxbcdefgh", "abcdwxyz", 0) !=
			test_strncmp("abcdwxyz", "abcdwxyz", 0))
		return (-1);
	return (0);
}
