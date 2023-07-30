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

size_t	ft_strlen(char *c)
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

size_t ft_strlcpy(char *dst, char *src, size_t size)
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
	l = ft_strlen((char *)s);
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

	i = ft_strlen((char *)s);
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
	s2_len = ft_strlen((char *)s2);
	if (s2_len == 0)
		return ((char *)s1);
	if (ft_strlen((char *)s1) < s2_len)
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