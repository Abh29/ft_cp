#ifndef __BBCP_H
#define __BBCP_H


# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>


#define     BUFFER_SIZE     1024

void    ft_exit(char *str, int err);
void    ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif // __BBCP_H
