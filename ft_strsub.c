/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stestein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:07:27 by stestein          #+#    #+#             */
/*   Updated: 2018/02/26 15:18:43 by stestein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, unsigned int n)
{
	unsigned int i;
	char *str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(*str) * n + 1);
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
		
