#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*t;

	t = (char *)s;
	i = 0;
	while (t[i])
	{
		if ((char)c == t[i])
			return (t + i);
		i++;
	}
	if ((char) c == t[i])
		return (t + i);
	return (0);
}
