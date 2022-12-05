/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:16:53 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/23 18:45:36 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef OPEN_MAX
#  define OPEN_MAX 4096
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

/*
***************************************************************************
				HEADERS
*/

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

/*
***************************************************************************
				FUNCTIONS
*/

char	*get_next_line(int fd);
char	*ft_read(int fd, char *src);
char	*ft_strchr(char *s1, int c);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s, char *buff);
char	*ft_get_line(char *c);
char	*ft_new_line(char *s);

#endif
