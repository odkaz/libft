#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

void	        *ft_memset(void	*buf, int	ch, size_t	n);
void	        ft_bzero(void	*s, size_t	n);
void	        *ft_memcpy(void	*buf1, const void	*buf2, size_t n);
void    	    *ft_memccpy(void	*dest, const void	*src, int c, size_t n);
void	        *ft_memmove(void	*buf1, const void	*buf2, size_t n);
void	        *ft_memchr(const void	*buf, int	ch, size_t	n);
int	            ft_memcmp(const void	*buf1, const void *buf2,size_t n);
int	            ft_strlen(const char	*str);
unsigned long	ft_strlcpy(char	*s1,char	*s2, unsigned long	size);
unsigned long	ft_strlcat(char	*s1, const char	*s2, unsigned long size);
char        	*ft_strchr(const char *s, int	c);
char        	*ft_strrchr(const char	*s, int	c);
char        	*ft_strnstr(const char	*big, const char	*little, size_t	len);
int	            ft_strncmp(const char	*s1, const char *s2, size_t n);
int	        	ft_atoi(const char		*str);
int	        	ft_isalpha(int	c);
int	        	ft_isdigit(int		c);
int	        	ft_isalnum(int	c);
int	        	ft_isascii(int	c);
int	        	ft_isprint(int	c);
int	        	ft_toupper(int	c);
int		        ft_tolower(int	c);
void	        *ft_calloc(size_t n, size_t	size);
char	        *ft_strdup(const char	*s);
char	        *ft_substr(char const	*s, unsigned int	start, size_t len);
char	        *ft_strjoin(char const	*s1, char const	*s2);
char	        *ft_strtrim(char const	*s1, char const	*set);
char	        **ft_split(char const	*s, char	c);
char	        *ft_itoa(int	n);
char	        *ft_strmapi(char const	*s, char (*f)(unsigned int, char));
void	        ft_putchar_fd(char	c, int	fd);
void	        ft_putstr_fd(char	*s, int	fd);
void	        ft_putendl_fd(char	*s, int	fd);
void	        ft_putnbr_fd(int	n, int	fd);









#endif