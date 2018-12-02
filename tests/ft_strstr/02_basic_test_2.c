/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:13:42 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:13:45 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_basic2(void)
{
	char	str[256];

	test_strcpy(str, "fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear");
	if (test_strcmp(ft_strstr(str, "zy"), test_strstr(str, "zy")))
		return (-1);
	return (0);
}
