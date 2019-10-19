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
	
	/*void *d1 = calloc((9223372036854775807L *2UL+1UL), sizeof(char));
	void *d2 = calloc(2, 1073741829);
	void *d3 = calloc(1, (9223372036854775807L *2UL+1UL));*/

	void *d1 = ft_calloc((9223372036854775807L *2UL+1UL), sizeof(char));
	void *d2 = ft_calloc(2, 1073741829);
	void *d3 = ft_calloc(1, (9223372036854775807L *2UL+1UL));
	printf("%s", d1);
	printf("%s", d2);
	return 0;
}