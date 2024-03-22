/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:21:31 by sunhnoh           #+#    #+#             */
/*   Updated: 2024/03/08 20:53:58 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tdst;
	char	*tsrc;

	i = 0;
	tdst = (char *)dst;
	tsrc = (char *)src;
	while (i < n)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char a[] = "123456789";
	void *b = memcpy(a + 1, a, 5);
	void *c = ft_memcpy(a + 1, a, 5);
	int	i;

	i = 0;
	while(a[i])
	{
		printf("%c", *(char *)b++);
		i++;
	}
	printf("\n");
	i = 0;
	while (a[i])
	{
		printf("%c", *(char *)c++);
		i++;
	}
	printf("end");
}*/
