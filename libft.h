/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 11:19:10 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/28 11:19:12 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUFF_SIZE 1

typedef struct		s_lst
{
	void			*content;
	size_t			content_size;
	struct s_lst	*next;
}					t_lst;

void				*ft_memset(void *destination, int c, size_t n);

void				ft_bzero(void *str, size_t n);

void				*ft_memcpy (void *dest, const void *source, size_t n);

void				*ft_memccpy (void *dest, const void *src, int c, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memchr (const void *arr, int c, size_t n);

size_t				ft_strlen(const char *str);

char				*ft_strdup(const char *src);

int					ft_strcmp(const char *str1, const char *str2);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

char				*ft_strcpy(char *dst, const char *src);

char				*ft_strncpy(char *dst, const char *src, size_t len);

char				*ft_strcat(char *destination, const char *append);

char				*ft_strstr(const char *str, const char *to_find);

char				*ft_strnstr(const char *str, const char *find, size_t len);

char				*ft_strncat(char *dest, const char *src, size_t len);

size_t				ft_strlcat(char *dest, const char *src, size_t len);

char				*ft_strnstr(const char *str, const char *find, size_t len);

char				*ft_strrchr(const char *str, int ch);

char				*ft_strchr(const char *str, int ch);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_atoi(const char *str);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_toupper(int c);

int					ft_tolower(int c);

void				*ft_memalloc(size_t size);

void				ft_memdel(void **ap);

char				*ft_strnew(size_t size);

void				ft_strclr(char *s);

void				ft_striter(char *s, void (*f)(char *));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

char				*ft_strmap(char const *s, char (*f)(char));

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_strequ(char const *s1, char const *s2);

int					ft_strnequ(char const *s1, char const *s2, size_t n);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s);

void				ft_putchar(char	c);

void				ft_putstr(char const *s);

void				ft_putendl(char const *s);

void				ft_putchar_fd(char c, int fd);

void				ft_putnbr(int n);

void				ft_putstr_fd(char const *s, int fd);

void				ft_putendl_fd(char const *s, int fd);

void				ft_putnbr_fd(int n, int fd);

char				*ft_itoa(int n);

void				ft_strdel(char **as);

char				*ft_itoa(int n);

char				**ft_strsplit(char const *s, char c);

int					ft_isalnum(int c);

t_lst				*ft_lstnew(void const *content, size_t content_size);

void				ft_lstdelone(t_lst **alst, void (*del)(void *, size_t));

void				ft_lstdel(t_lst **alst, void (*del)(void *, size_t));

void				ft_lstadd(t_lst **alst, t_lst *new);

void				ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));

t_lst				*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));

int					ft_iterative_factorial(int nb);

int					ft_sqrt(int nb);

int					get_next_line(const int file_d, char **line);

#endif
