/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystrtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 22:35:39 by anassif           #+#    #+#             */
/*   Updated: 2019/10/11 22:35:41 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	find_left(char const *s1, char const *set)
{
	int found1;
	int i;

	found1 = -1;
	i = 0;
	while (s1[i] != '\0' && found1 == -1)
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			found1 = i;
		}
		i++;
	}
	return (found1);
}

static	int	find_right(char const *s1, char const *set, int found1)
{
	int found2;
	int len;

	found2 = -1;
	len = ft_strlen(s1);
	while (len > found1 && found2 == -1)
	{
		if(ft_strchr(set, s1[len-1]) == NULL)
		{
			found2 = len;
		}
		len--;
	}
	return (found2);
}
char		*ft_strtrim(char const *s1, char const *set)
{
	int		found1;
	int 	found2;
	int 	i;
	int 	size;
	char	*str;

	i = 0;
	found1 = find_left(s1,set);
	found2 = find_right(s1,set,found1);
	size = found2 - found1;
	str = (char *) malloc(sizeof (char) * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = s1[found1];
		i++;
		found1++;
	}
	str[i] = '\0';
	return (str);
}
int main() 
{
	char s1[30] = "ckk _dwda_    abce eje/kl abcab";
	char s2[10] = "abc";
	printf("%s",ft_strtrim(s1,s2));
  return 0;
}