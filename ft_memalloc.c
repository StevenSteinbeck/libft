/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stestein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 10:29:57 by stestein          #+#    #+#             */
/*   Updated: 2018/03/02 12:07:57 by stestein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(unsigned int n)
{
	void *s;
	char *str;
	unsigned int i;


	i = 0;
	s = malloc(n);
	str = (char *)s;
	if (s == NULL)
		return (NULL);
	while(i < n)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);	
}

