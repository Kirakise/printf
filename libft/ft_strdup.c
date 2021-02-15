/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaraway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:55:55 by rcaraway          #+#    #+#             */
/*   Updated: 2020/11/01 20:56:39 by rcaraway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*ret;
	char	*tmp2;

	tmp2 = (char *)s1;
	size = ft_strlen(tmp2);
	ret = malloc(sizeof(char) * size + 1);
	if (ret == 0)
		return (0);
	tmp2 = ret;
	while (*s1)
		*tmp2++ = *s1++;
	*tmp2 = '\0';
	return (ret);
}
