/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:22:58 by nik               #+#    #+#             */
/*   Updated: 2023/08/26 15:51:00 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

/* 
    isalpha(int c): Checks if character is an alphabetic char (a-z/A-Z).
    isdigit(int c): Checks if character is a digit (0-9).
    isalnum(int c): Checks if char is alphanumeric (letter/digit).
    isascii(int c): Checks if char is valid ASCII (0-127).
    isprint(int c): Checks if char is printable (32-126).
    strlen(const char *s): Length of null-terminated str.
    memset(void *s, int c, size_t n): Fill memory block with value.
    bzero(void *s, size_t n): Fill memory block with zeros.
    memcpy(void *dest, const void *src, size_t n): Copy memory.
    memmove(void *dest, const void *src, size_t n): Copy with overlap.
    strlcpy(char *dest, const char *src, size_t size): Safe string copy.
    strlcat(char *dest, const char *src, size_t size): Safe string concat.
    toupper(int c): Convert to uppercase.
    tolower(int c): Convert to lowercase.
    strchr(const char *s, int c): Find char in string.
    strrchr(const char *s, int c): Find char in string (rev).
    strncmp(const char *s1, const char *s2, size_t n): Compare n chars.
    memchr(const void *s, int c, size_t n): Find char in mem.
    memcmp(const void *s1, const void *s2, size_t n): Compare mem.
    strnstr(const char *h, const char *n, size_t len): Find str in str.
    atoi(const char *nptr): Convert str to int.
 */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (8);
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d > s && d < &s[n])
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	j = 0;
	i = ft_strlen(dst);
	dst_len = i;
	while (i < size - 1 && src[j] != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	if (dst_len > size)
		return (ft_strlen(src) + size);
	return (dst_len);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(s);
	while (i <= l)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == 0 || s2[i] == 0)
			return (0);
		i++;
	}
	return (0);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char	*s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	s2_len;

	i = 0;
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)s1);
	if (ft_strlen(s1) < s2_len)
		return (NULL);
	while (i <= len - s2_len)
	{
		if (ft_strncmp(&s1[i], s2, s2_len - 1) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	if (str[0] == '-')
	{
		i++;
		sign = -sign;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return ((result * sign));
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*array;

	i = 0;
	array = malloc(nmemb * size);
	while (i < nmemb * size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;
	char	*dup;

	dup = (char *)s;
	i = 0;
	str = malloc(ft_strlen(dup) + 1);
	while (i <= ft_strlen(dup))
	{
		str[i] = dup[i];
		i++;
	}
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	while (*s1 && ft_strchr(set, *s1) != NULL)
		*s1++;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != NULL)
		i--;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = 0;
	return (str);
}

int	set_char(char *s, char dst, char src)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == dst)
		{
			i++;
			*s = src;
		}
		s++;
	}
	return (i);
}

int	cpy_splits(char c, char const *s, char **str_array, size_t str_count)
{
	int	i;

	i = 0;
	if (s[i] == 0)
		return (1);
	while (s[i] != c && s[i])
		i++;
	str_array[str_count] = (char *)malloc(sizeof(char) * i + 1);
	if (!str_array[str_count])
		return (0);
	ft_strlcpy(str_array[str_count], s, i + 1);
	s += i + 1;
	if (cpy_splits(c, s, str_array, str_count + 1) == 0)
		free (str_array[str_count]);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str_array;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	str_array = (char **)malloc(sizeof(char *) * j + 1);
	if (!str_array)
		return (NULL);
	if (cpy_splits(c, s, str_array, 0) == 0)
		free (str_array);
	str_array[j + 1] = NULL;
	return (str_array);
}

char	*ft_itoa_negative(int n, int j, char *str)
{
	str[j] = 0;
	str[0] = '-';
	n = -n;
	while (j > 0)
	{
		str[j] = n % 10 + 48;
		n /= 10;
		j--;
	}
	return (str);
}

int	digit_nbr(int nbr)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (nbr / i)
	{
		i *= 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;

	if (n == 0)
		return ("0");
	j = digit_nbr(n);
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (n < 0)
		return (ft_itoa_negative(n, j, str));
	if (!str)
		return (NULL);
	str[j] = 0;
	while (j >= 0)
	{
		str[j - 1] = n % 10 + 48;
		n /= 10;
		j--;
	}
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(ft_strlen(s) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	write(fd, str, ft_strlen(str));
}

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst -> next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*position;

	position = *lst;
	while (position->next != NULL)
		position = position -> next;
	position->next = new;
	new->next = NULL;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*temp_node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node != NULL)
	{
		temp_node = node;
		node = node->next;
		del(temp_node->content);
		free(temp_node);
	}
	*lst = NULL;
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	f(lst->content);
	del(lst->content);
	new_lst = ft_lstnew(lst->content);
	lst = lst->next;
	while (lst != NULL)
	{
		f(lst->content);
		del(lst->content);
		new_node = ft_lstnew(lst->content);
		if (new_node == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

void	ft_print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s ", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}
