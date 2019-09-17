#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*t1;
	const unsigned char	*t2;
	size_t			i;

	if (!n)
		return (0);
	i = 0;
	t1 = (unsigned char *) s1;
	t2 = (unsigned char *) s2;
	while (i < n)
	{
		if (t1[i] != t2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (t1[i] - t2[i]);
}
