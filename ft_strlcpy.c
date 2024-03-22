/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:18:43 by sunhnoh           #+#    #+#             */
/*   Updated: 2024/03/09 11:42:47 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && ((i + 1) < size))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
/*
#include <stdio.h>

int main(void)
{
	char dst[] = "123456789";
	const char src[] = "abcdefg";
	printf("%ld", ft_strlcpy(dst, src, 3));
	printf("\n");
	printf("%s", dst);
}*/
