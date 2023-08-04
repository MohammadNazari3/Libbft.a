/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:45:00 by Mnazari           #+#    #+#             */
/*   Updated: 2023/03/26 10:48:16 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function take two string size n and compare the 
two string and return an integer value 
that shows the differen ascii value of the results */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		if (i < (n - 1))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
