#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	char	*t;

	t = (char *)s;
	len = ft_strlen(s) + 1;
	while (len >= 0)
	{
		if (t[len] == (char) c)
			return (t + len);
		len--;
	}
	return (0);
}
