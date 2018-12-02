/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_hard_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:57:18 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:57:20 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_hard(void)
{
	char	*dest;
	char	str[500];

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (-1);
	test_strcpy(str, "Lorem ipsum dolor sit amet, consectetur adipiscing ");
	test_strcpy(str + test_strlen(str), "elit. Suspendisse at neque in sapie");
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, str, 5), test_strncat(dest, str, 5)))
		return (-1);
	return (0);
}
