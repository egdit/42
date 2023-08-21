#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft/libft.h"

# define BUFFER_SIZE 42

char			*get_next_line(int fd);
char			*ft_strjoinn(char *s1, char const *s2);
unsigned int	ft_strlenn(const char *str);
int				ft_index(const char *s, char c);
char			*ft_strdupp(const char *s1);

#endif