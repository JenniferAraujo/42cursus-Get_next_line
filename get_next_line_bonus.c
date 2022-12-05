/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:16:50 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/24 17:17:52 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: Desenvolva get_next_line() usando apenas uma variável estática.
*/

#include "get_next_line_bonus.h"

char	*ft_read(int fd, char *src)
{
	char	*buff;
	int		read_bts;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bts = 1;
	while (!ft_strchr(src, '\n') && read_bts != 0)
	{
		read_bts = read(fd, buff, BUFFER_SIZE);
		if (read_bts == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bts] = '\0';
		src = ft_strjoin(src, buff);
	}
	free(buff);
	return (src);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*s[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s[fd] = ft_read(fd, s[fd]);
	if (!s[fd])
		return (NULL);
	line = ft_get_line(s[fd]);
	s[fd] = ft_new_line(s[fd]);
	return (line);
}

/*int	main()
{
	int fd = open("a.txt", OPEN_MAX);
    int fd2 = open("b.txt", OPEN_MAX);
    int fd3 = open("c.txt", OPEN_MAX);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd3));
	printf("%s", get_next_line(fd));

	return 0;
}*/
