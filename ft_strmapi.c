/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkayleen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:27:20 by bkayleen          #+#    #+#             */
/*   Updated: 2019/09/19 21:30:50 by bkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	if (!(res = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
