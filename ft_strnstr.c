/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stestein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:03:35 by stestein          #+#    #+#             */
/*   Updated: 2018/02/22 17:02:17 by stestein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, unsigned int n)
{ 
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (str[i] == to_find[i] && str[i] == '\0')
		return ((char *)&str[i]);
	while (str[i] && i <= n)
	{
		j = i;
		while (str[j] == to_find[j - i] && str[j] && j < n)
			j++;
		if (to_find[j - i] == '\0')
				return ((char *)&str[i]);
		i++;
	}
	return (0);
}
