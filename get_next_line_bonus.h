/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:29:35 by zel-yama          #+#    #+#             */
/*   Updated: 2024/12/01 18:02:47 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

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