/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:55 by zel-yama          #+#    #+#             */
/*   Updated: 2024/12/01 18:08:16 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1040
# endif

char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
int		ft_strchr(const char *s, int c);
char	*free_and_join(char *store, char *s);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);

#endif