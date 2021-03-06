/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_test3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:44:14 by nouhaddo          #+#    #+#             */
/*   Updated: 2018/12/02 19:44:16 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char	*test_strrchr(const char *s, int c)
{
	size_t i;

	i = 0;
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	i = ft_strlen(s);
	while (s[i] != c)
		i--;
	return ((char*)s + i);
}

char	*test_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == len - 1)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int		test_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int		test_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	*test_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*f;

	i = 0;
	f = (char*)b;
	while (i < len)
		f[i++] = ((char)c);
	b = (void*)f;
	return (b);
}
