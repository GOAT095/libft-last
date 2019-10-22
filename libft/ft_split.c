/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:14:39 by anassif           #+#    #+#             */
/*   Updated: 2019/10/12 17:14:40 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_string(char *s, char c)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (1)
	{
		if ((s[i] == c && i != 0 && s[i - 1] != c)
			|| (s[i] == '\0' && i > 0 && s[i - 1] != c))
			w++;
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (w);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	w;
	size_t	d;
	char	**str;

	w = ft_count_string((char *)s, c);
	str = (char **)malloc(sizeof(char *) * (w + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	d = 0;
	j = 0;
	while (2)
	{
		if ((s[i] == c && i != 0 && s[i - 1] != c)
			|| (s[i] == '\0' && i > 0 && s[i - 1] != c))
			str[j++] = ft_substr((char *)s, d, i - d);
		if (s[i] == c)
			d = i + 1;
		if (s[i++] == '\0')
			break ;
	}
	str[j] = NULL;
	return (str);
}
