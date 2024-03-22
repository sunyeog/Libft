/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:37:09 by sunhnoh           #+#    #+#             */
/*   Updated: 2024/02/29 20:59:03 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = (char *)malloc(sizeof(char) * (len + 1));
	temp[len] = 0;
	if (temp == 0)
		return (0);
	while (i < len)
	{
		temp[i] = s[start + i];
		i++;
	}
	return (temp);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s", ft_substr("abcdefg", 2, 3));
}*/
