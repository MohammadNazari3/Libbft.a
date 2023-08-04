/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:05:29 by Mnazari           #+#    #+#             */
/*   Updated: 2023/04/15 17:50:27 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function allocate memory for the sub-string
of an exisiting string  *start is the starting index
of substring in s */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	str_len;

	if (!s)
		return (0);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	str_len -= start;
	if (len > str_len)
		len = str_len;
	sub_str = (char *)malloc(sizeof(char) * (len +1));
	if (!sub_str)
		return (0);
	ft_memcpy(sub_str, s + start, len + 1);
	sub_str[len] = '\0';
	return (sub_str);
}
