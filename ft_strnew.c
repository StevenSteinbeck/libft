/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stestein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:50:35 by stestein          #+#    #+#             */
/*   Updated: 2018/02/26 12:32:23 by stestein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(unsigned int n)
{
	char *str;
	unsigned int i;
	void *s;

	i = 0;
	s = malloc(n + 1);
	str = (char *)s;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
