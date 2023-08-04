/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:44:11 by Mnazari           #+#    #+#             */
/*   Updated: 2023/04/02 21:30:03 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* This function search for the last occurerence of a char c in the string s.
The function return a pointer to the last occurrence or null if not found */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
