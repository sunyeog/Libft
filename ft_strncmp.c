/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosunhyeog <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:47:32 by nosunhyeog        #+#    #+#             */
/*   Updated: 2024/03/23 17:41:17 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && (i + 1 < n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int main()
{
				char	*big = "abcdef";
			char	*little = "abcdefghijklmnop";
			size_t	size = 6;
	const char	s1[] = "abcdefg";
	const char	s2[] = "abcfefg";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d", strncmp(s1, s2, 4));
}*/
