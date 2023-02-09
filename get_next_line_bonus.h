/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 22:09:55 by tlukanie          #+#    #+#             */
/*   Updated: 2023/02/03 22:10:32 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

size_t	str_length(const char *str);
char	*strjoin_content_buf(char *s1, char *s2);
char	*strchr_locate_nl(const char *str, int nl);
char	*read_fd(int fd, char *content);
char	*current_line(char *content);
char	*clear_previous_line(char *content);
char	*get_next_line(int fd);

#endif
