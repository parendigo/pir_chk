/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarraq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 03:41:38 by mlarraq           #+#    #+#             */
/*   Updated: 2019/04/23 07:22:22 by mlarraq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char *s;

	s = (char*)str;
	while (*s != ch)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
