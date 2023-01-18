/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:17:52 by llaurenc          #+#    #+#             */
/*   Updated: 2023/01/18 14:34:07 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int		ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	len;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc (sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (i < len)
	{
		str[i] = s2[j++];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		ft_check_end_line(char *buff)
{
	int checker;
	int i;

	checker = 0;
	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
			checker = 1;
		i++;
	}
	return (checker);
}
