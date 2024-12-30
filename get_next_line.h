/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 07:43:56 by ertugrullik       #+#    #+#             */
/*   Updated: 2024/12/28 08:02:19 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE.H
# define GET_NEXT_LINE.H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

size_t		ft_strlen(const char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s1);

char	*ft_strjoin(char const *s1, char const *s2);

char    *get_next_line(int fd);








#endif
