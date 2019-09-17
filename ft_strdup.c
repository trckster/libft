#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*res;
	int	len;

	len = ft_strlen(s);
	res = (char *)malloc(len + 1);
	res[len] = 0;
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
