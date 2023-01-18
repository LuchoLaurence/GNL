/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:56:19 by llaurenc          #+#    #+#             */
/*   Updated: 2023/01/18 15:09:32 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buff;
	ssize_t	size;
	char	*temp;
	int		i;
	int		j;

	if (fd == -1)
	{
		printf("Erreur lors de l'ouverture du fichier\n");
		return (0);
	}
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buff == NULL)
		return (NULL);
	size = 1;
	while (size > 0)
	{
		i = 0;
		size = read(fd, buff, BUFFER_SIZE);
		{
			if (!(ft_check_end_line(buff)))
			{
				temp = malloc(sizeof(char) * size);
				while (i < size)
					{
						temp[i] = buff[i];
						i++;
					}
				printf("%s\n", temp);
			}
		}
	}
	return ("hh");
}

int	main()
{
	int		fd;
	char	*str;

	fd = open("test.txt", O_RDONLY);
	str = get_next_line(fd);
	close(fd);
	return (0);
}
