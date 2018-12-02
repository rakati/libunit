/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_hard_test_4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:53:57 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:54:00 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_hard(void)
{
	char	str[4096];
	int		len;

	test_strcpy(str, "Lorem ipsum dolor sit amet, consectetur adipiscing");
	len = test_strlen(str);
	test_strcpy(str + len, "elit, sed do eiusmod tempor incididunt ut labore");
	len = test_strlen(str);
	test_strcpy(str + len, "aliqua. Ut enim ad minim veniam, quis nostrud ex");
	len = test_strlen(str);
	test_strcpy(str + len, "ullamco laboris nisi ut aliquip ex ea commodo c");
	len = test_strlen(str);
	test_strcpy(str + len, "aute irure dolor in reprehenderit in voluptat");
	len = test_strlen(str);
	test_strcpy(str + len, "dolore eu fugiat nulla pariatur. Excepteur sint");
	len = test_strlen(str);
	test_strcpy(str + len, "cupidatat non proident, sunt in culpa qui offi");
	len = test_strlen(str);
	test_strcpy(str + len, "mollit anim id est laborum.");
	if (test_strcmp(ft_strdup(str), str))
		return (-1);
	return (0);
}
