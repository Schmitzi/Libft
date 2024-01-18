/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:08:58 by codespace         #+#    #+#             */
/*   Updated: 2023/10/25 16:09:45 by codespace        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int		absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	char *result;
	int len;

	len = ft_strlen(nbr);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';

	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';

	while (nbr != 0)
	{
		--len;
		result[len] = absolute_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}

// int		main(void)
// {
// 	int d = INT_MIN;
// 	printf("%d =? %s\n", d, ft_itoa(d));
//	return (0);
// }