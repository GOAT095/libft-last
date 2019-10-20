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

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

int main ()
{
	//char **x;
	//int i = 0;
	/*x = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	while(x[i])
    {
        printf("%s\n",x[i]);
        i++;
    }*/
	printf("%d", ft_strncmp("test", "tEst", 4));
	printf("%d", strncmp("test", "tEst", 4));
	return 0;
}