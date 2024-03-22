/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:52:55 by sunhnoh           #+#    #+#             */
/*   Updated: 2024/03/16 17:16:52 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tsrc;
	char	*tdst;
	size_t	i;

	i = 0;
	tsrc = (char *)src;
	tdst = (char *)dst;
	if (dst > src)
	{
		while (len > i)
		{
			*(tdst + (len - 1)) = *(tsrc + (len - 1));
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			tdst[i] = tsrc[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char a[] = "123456789";
	char d[] = "123456789";
	//void *b = memmove(a + 1, a, 5);
	//void *c = ft_memmove(d + 1, d, 5);
	printf("%s", (char *)memmove(a, a + 1, 5));
	printf("\n");
	printf("%s", (char *)ft_memmove(d, d + 1, 5));
	printf("\n");
	printf("end");
}*/
