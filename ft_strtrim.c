/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:25:51 by sunhnoh           #+#    #+#             */
/*   Updated: 2024/03/23 03:38:12 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_test(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_count(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	sum;

	sum = 0;
	j = 0;
	while (s1[j])
	{
		i = 0;
		while (set[i])
		{
			if (s1[j] == set[i])
				sum++;
			i++;
		}
		j++;
	}
	return (sum);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) - ft_count(s1, set);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp == 0)
		return (0);
	tmp[len] = 0;
	while (s1[i])
	{
		if (ft_test(s1[i], set) == 0)
		{
			tmp[j] = s1[i];
			j++;
		}
		i++;
	}
	return (tmp);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *str = ft_strtrim("lorem ipsum dolor sit amet", "tel");
	printf("%s\n", str);
}
