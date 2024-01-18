/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:49:05 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/09/16 16:47:19 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(s1) - 1;
	if (!*s1)
		return (ft_strdup(""));
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (n > i && ft_strchr(set, s1[n]) != NULL)
		n--;
	return (ft_substr(s1, i, n - i + 1));
}
/*
int main(void)
{
    char const *s1 = "\t\nHello\n\t";
    char const *set = "\t\n";
    if (s1 == NULL)
        printf("Input is NULL\n");
    else
	{
		printf("Before: \"%s\"\n", s1);
        printf("After: \"%s\"\n", ft_strtrim(s1, set));
	}
    return (0);
}
*/