/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:13:49 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:13:51 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_basic3(void)
{
	char	str[256];

	test_strcpy(str, "fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear");
	if (ft_strstr(str, "xxx") != NULL)
		return (-1);
	return (0);
}
