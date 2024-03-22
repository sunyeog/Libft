/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosunhyeog <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:47:32 by nosunhyeog        #+#    #+#             */
/*   Updated: 2024/03/14 11:47:39 by nosunhyeog       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && (i < n))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main()
{
	const char	s1[] = "abcdefg";
	const char	s2[] = "abcfefg";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d", strncmp(s1, s2, 4));
}*/
