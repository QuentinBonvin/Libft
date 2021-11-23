/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:21:13 by qbonvin           #+#    #+#             */
/*   Updated: 2021/11/19 15:39:37 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	index_newstr;
	unsigned int	index;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	newstr = malloc(sizeof(char) * len + 1);
	if (!newstr)
		return (0);
	index_newstr = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (index >= start && index_newstr < len)
		{
			newstr[index_newstr] = s[index];
			index_newstr++;
		}
		index++;
	}
	newstr[index_newstr] = '\0';
	return (newstr);
}
