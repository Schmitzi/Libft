/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:47:43 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/09/16 13:11:19 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s++ == (char)c)
			return ((char *)--s);
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main (void)
{
//	const char	*s = "0x5581ba7ac0a6";
	const char	*s = "Hello";
	int			c = 'e';
	ft_strchr(s, c);
	return (0);
}
*/
