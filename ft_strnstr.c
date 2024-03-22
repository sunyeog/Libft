/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:57:05 by sunhnoh           #+#    #+#             */
/*   Updated: 2024/03/22 19:41:17 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big && (j < len))
	{
		if ((j + ft_strlen(little)) > len)
			return (0);
		if (*big == *little)
		{
			i = 0;
			while (*(big + i) == *(little + i))
			{
				i++;
				if (*(little + i) == '\0')
					return ((char *)big);
			}
		}
		j++;
		big++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	const char big[] = "babcefg";
	const char little[] = "abc";
	printf("%d\n", ft_strnstr(big, little, 3));
	printf("%d", strnstr(big, little, 3));
}*/
