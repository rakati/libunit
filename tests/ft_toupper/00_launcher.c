/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:15:33 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 20:15:38 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		toupper_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("TOUPPER:\n");
	load_test(&test, "Basic test 01", &toupper_basic);
	load_test(&test, "NULL test 01", &toupper_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
