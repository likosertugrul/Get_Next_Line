#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

// BUFFER_SIZE tanımı
#  define BUFFER_SIZE 42 // Varsayılan bir değer

// get_next_line_utils.c
int		ft_strlen(char *str);
char	*ft_strdup(char *str);

// get_next_line.c
char	*get_next_line(int fd);

#endif
