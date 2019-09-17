#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = (size_t) ft_strlen(src);
	dst_len = (size_t) ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	while (i + dst_len < size - 1 && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = 0;
	return (dst_len + src_len);
}
