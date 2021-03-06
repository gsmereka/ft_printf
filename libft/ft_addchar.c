/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:12:23 by gsmereka          #+#    #+#             */
/*   Updated: 2022/07/16 01:00:08 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addchar(char *s, char c)
{
	char	*new_s;
	int		size;
	int		i;

	if (c == '\0')
		return (s);
	i = 0;
	size = ft_strlen(s);
	new_s = (char *)malloc((size + 2) * sizeof(char));
	while (s[i])
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = c;
	new_s[i + 1] = '\0';
	free(s);
	return (new_s);
}
