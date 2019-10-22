/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:28:15 by anassif           #+#    #+#             */
/*   Updated: 2019/10/15 16:28:24 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	/*char **x;
	int i = 0;*/
	/*x = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	while(x[i])
    {
        printf("%s\n",x[i]);
        i++;
    }*/
	//printf("%d\n", ft_strncmp("test", "tEst", 4));
	//printf("%d", strncmp("test", "tEst", 4));
	//printf("%d",ft_atoi("0"));
	/*	char *str;
		char *pouet = "z\0";
		char *lolzer = (char *)&pouet[2];
		lolzer = "aaaaaaaaaa";
		str = ft_memchr(pouet, 'a', 50);
		printf("%s", str);*/
	printf("%s\n",ft_strnstr(NULL,"hhrth", 0));
	//printf("%s",strnstr(NULL,"hhrth", 0));
	return 0;
}