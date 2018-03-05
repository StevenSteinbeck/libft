/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stestein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 10:46:17 by stestein          #+#    #+#             */
/*   Updated: 2018/03/02 12:02:01 by stestein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        getsize(int n)
{
    int i;

    i = 0;
    if(n < 0)
      n = -n;
    while(n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char    *placer(char *str, int i, int n, int p)
{
    int x;

    x = i;
    if (n < 0)
    {
        n = -n;
        i--;
        x = i;
    }
    else if (n >= 0)
      i--;
    while (i >= 0 && x > 0)
    {
        str[i] = (n % 10) + '0';
        n = n / 10;
        p++;
        i--;
        x--;
    }
    return (str);
}

char	*minint(char *str, char *min, int p)
{
	while (min[p] != '0')
	{
		str[p] = min[p];
		p++;
	}
	return (str);
}

char    *ft_itoa(int n)
{
    int i;
    char *str;
    int p;
	char *min;

    p = 1;
	min = "-2147483648";
    i = getsize(n);
    if (n <= 0)
      i++;
    str = (char *)(malloc(sizeof(*str) * i + 1));
    if (str == NULL)
        return (NULL);
    str[i] = '\0';
    if (n < 0)
      str[0] = '-';
	if (n <= -2147483648)
		return(minint(str, min, p));
	p = 0;
    return (placer(str, i, n, p));
}
