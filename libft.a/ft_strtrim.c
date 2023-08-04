/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:53:13 by mnazari           #+#    #+#             */
/*   Updated: 2023/04/08 18:42:26 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* the strtrim function trim the string from starting 
point of the string and end point of the string */
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_str;
	size_t	len_newstr;

	if (!s1)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	len_newstr = ft_strlen(s1);
	while (len_newstr > 0 && ft_strchr(set, s1[len_newstr - 1]))
		len_newstr--;
	new_str = malloc(len_newstr + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, len_newstr + 1);
	return (new_str);
}
