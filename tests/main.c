/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 04:06:12 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 22:12:39 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	welcome()
{
	ft_putstr("                                                                                               \n\
			bbbbbbbb                                                                            \n\
			lllllll   iiii b::::::b                                                iiii          tttt          \n\
			l:::::l  i::::ib::::::b                                               i::::i      ttt:::t          \n\
			l:::::l   iiii b::::::b                                                iiii       t:::::t         \n\
			l:::::l         b:::::b                                                           t:::::t          \n\
			l::::l iiiiiii b:::::bbbbbbbbb    uuuuuu    uuuuuunnnn  nnnnnnnn    iiiiiiittttttt:::::ttttttt    \n\
			l::::l i:::::i b::::::::::::::bb  u::::u    u::::un:::nn::::::::nn  i:::::it:::::::::::::::::t    \n\
			l::::l  i::::i b::::::::::::::::b u::::u    u::::un::::::::::::::nn  i::::it:::::::::::::::::t    \n\
			l::::l  i::::i b:::::bbbbb:::::::bu::::u    u::::unn:::::::::::::::n i::::itttttt:::::::tttttt    \n\
			l::::l  i::::i b:::::b    b::::::bu::::u    u::::u  n:::::nnnn:::::n i::::i      t:::::t          \n\
			l::::l  i::::i b:::::b     b:::::bu::::u    u::::u  n::::n    n::::n i::::i      t:::::t          \n\
			l::::l  i::::i b:::::b     b:::::bu::::u    u::::u  n::::n    n::::n i::::i      t:::::t          \n\
			l::::l  i::::i b:::::b     b:::::bu:::::uuuu:::::u  n::::n    n::::n i::::i      t:::::t    tttttt\n\
			l::::::li::::::ib:::::bbbbbb::::::bu:::::::::::::::uun::::n    n::::ni::::::i     t::::::tttt:::::t\n\
			l::::::li::::::ib::::::::::::::::b  u:::::::::::::::un::::n    n::::ni::::::i     tt::::::::::::::t\n\
			l::::::li::::::ib:::::::::::::::b    uu::::::::uu:::un::::n    n::::ni::::::i       tt:::::::::::tt\n\
			lllllllliiiiiiiibbbbbbbbbbbbbbbb       uuuuuuuu  uuuunnnnnn    nnnnnniiiiiiii         ttttttttttt  ");
}

int		main(void)
{
	welcome();
	atoi_launcher();
	isalnum_launcher();
	isalpha_launcher();
	isascii_launcher();
	isdigit_launcher();
	isprint_launcher();
	strchr_launcher();
	strdup_launcher();
	strlen_launcher();
	strncat_launcher();
	strncmp_launcher();
	strncpy_launcher();
	strnstr_launcher();
	strrchr_launcher();
	strstr_launcher();
	tolower_launcher();
	toupper_launcher();
	return (0);
}
