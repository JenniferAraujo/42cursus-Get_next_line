/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:50:47 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/23 18:45:46 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: get_next_line() é um programa que retorna uma linha lida de um
    descritor de arquivo.
*/

#include "get_next_line.h"

/* A função ft_read() irá ler nbytes de um file descrictor(fd) em um buffer
começando por buf.
Return: -1 se houver erro na leitura
0 se leu todo o arquivo e nao houver nova linha
1 se leu algo.*/
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

/* get_next_line() pega um descritor de arquivo aberto e retorna sua próxima
linha. Se for bem-sucedido, get_next_line retorna uma string com a linha
inteira terminando em uma quebra de linha ('\n') quando houver. Se ocorrer
um erro ou se não houver mais nada para ler, ele retorna NULL. */

char	*get_next_line(int fd)
{
	char		*line;
	static char	*s;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = ft_read(fd, s);
	if (!s)
		return (NULL);
	line = ft_get_line(s);
	s = ft_new_line(s);
	return (line);
}

/*int main(void)
{
	int		fd;
	char	*prt;
	fd = open("files/test.txt", O_RDONLY);
	prt = get_next_line(fd);
	printf("\nFunc Return: %s\n", prt);
	free(prt);
	prt = get_next_line(fd);
	printf("\nFunc Return: %s\n", prt);
	free(prt);
	prt = get_next_line(fd);
	printf("\nFunc Return: %s\n", prt);
	free(prt);
	close(fd);
}*/

/*int main(void)
{
	int		fd;
	char	*prt;
	int		i = 0;
	fd = open("files/1-brouette.txt", O_RDONLY);
	printf("fd = %d\n", fd);
	while (i < 80)
	{
		prt = get_next_line(fd);
		printf("%s", prt);
		free(prt);
		i++;
	}
	close(fd);
}*/

/*int	main(void)
{
	int		fd;
	char	*prt;
	int		i = 0;
	fd = open("files/42_no_nl", O_RDONLY);
	printf("fd = %d\n", fd);
	while (i < 1)
	{
		prt = get_next_line(fd);
		printf("%s", prt);
		free(prt);
		i++;
	}
	close(fd);
}*/

/*int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;
	fd1 = open("tests/test.txt", O_RDONLY);
	fd2 = open("tests/test2.txt", O_RDONLY);
	fd3 = open("tests/test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %*int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;
	fd1 = open("tests/test.txt", O_RDONLY);
	fd2 = open("tests/test2.txt", O_RDONLY);
	fd3 = open("tests/test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);

	int		i;
	int		fd1;
	int		fd2;
	int		fd3;
	fd1 = open("tests/test.txt", O_RDONLY);
	fd2 = open("tests/test2.txt", O_RDONLY);
	fd3 = open("tests/test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
*/