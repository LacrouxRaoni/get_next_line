/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:44:54 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/09/07 14:30:32 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		free_reader(char **backup_buffer, int bytes_read);
void	arrange_backup(char **backup_buffer, int *i);
char	*extract_line(char **buffer);
int		read_file(int fd, char **buffer, char **buffer_backup);
char	*get_line(int fd, char **buff, char **backup_buff);
char	*get_next_line(int fd);
char	*gnl_join(char **s1, char **s2);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);

#endif