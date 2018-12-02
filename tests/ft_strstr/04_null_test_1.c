/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:13:54 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:14:05 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_null1(void)
{
	char	str[256];

	test_strcpy(str, "fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear");
	if (test_strcmp(test_strstr(str, ""),
				ft_strstr(str, "")) != 0)
		return (-1);
	return (0);
}
