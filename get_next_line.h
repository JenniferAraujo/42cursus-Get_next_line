/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:50:50 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/23 18:45:44 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
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

size_t		ft_strlen(char *str);
char		*ft_strchr(char *s1, int c);
char		*ft_strjoin(char *s, char *buff);
char		*ft_new_line(char *s);
char		*ft_get_line(char *c);
char		*get_next_line(int fd);
char		*ft_read(int fd, char *src);

#endif
