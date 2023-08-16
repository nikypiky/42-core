#include<stdlib.h>

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
		return(2048);
	return(0);
}

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (8);
	return(0);
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
	size_t i;

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
	return(s);
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
	size_t i;

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
	size_t i;
	unsigned char *d;
	unsigned char *s;

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

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

size_t ft_strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(dst);
	while (i < size - 1 && src[i] != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (ft_strlen(dst));
}

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char *ft_strchr(const char *s, int c)
{
	int i;
	int l;

	i = 0;
	l = ft_strlen(s);
	while (i <= l)
	{
		if (s[i] == c)
			return((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			if (s1[i] == 0 || s2[i] == 0)
				return(0);
			i++;
		}
	return (0);
}

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return(&str[i]);
		i++;
	}
	return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *str1;
	char *str2;

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
			return((char *)&s1[i]);
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
	while(i < len)
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

// char **ft_split(const char *s, char c)
// {	
//     int i = 0;
//     int j = 0;
//     char *buffer;
//     char **str_array;

//     buffer = (char *)malloc(ft_strlen((char *)s) + 1);
//     if (!buffer)
//         return NULL;
//     ft_strlcpy(buffer, (char *)s, ft_strlen((char *)s) + 1);
//     j = set_char(buffer, c, '\0');
//     str_array = (char **)malloc(sizeof(char *) * (j + 1));
//     if (!str_array)
//     {
//         free(buffer);
//         return NULL;
//     }
//     while (i <= j)
//     {
//         str_array[i] = (char *)malloc((ft_strlen(buffer) + 1) * sizeof(char));
//         if (!str_array[i])
//         {
//             while (i > 0)
//                 free(str_array[--i]);
//             free(str_array);
//             free(buffer);
//             return NULL;
//         }
//         ft_strlcpy(str_array[i], buffer, ft_strlen(buffer) + 1);
//         buffer += ft_strlen(buffer) + 1;
//         i++;
//     }
//     str_array[i] = NULL;
//     free(buffer); // Free the original buffer
//     return str_array;
// }


// char **ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		j;
// 	char	**str_array;

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			j++;
// 		i++;
// 	}
// 	str_array = (char **)malloc(sizeof(char *) * j + 1);
// 	if (!str_array)
// 		return (NULL);
// 	i = 0;
// 	while (*s)
// 	{
// 		int k = (ft_strchr(s, c) - s + 1);
// 		str_array[i] = malloc((ft_strchr(s, c) - s + 1) * sizeof(char));
// 		ft_memcpy(str_array[i], s, ft_strchr(s, c) -s);
// 		str_array[i][ft_strchr(s, c) - s + 1] = 0;
// 		s = ft_strchr(s, c) + 1;
// 		char *x = str_array[i];
// 		// printf("%s\n", str_array[i]);
// 		i++;
// 	}
// 	str_array[i] = NULL;
// 	return (str_array);
// }


