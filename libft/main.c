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
	const char s[209] = "9999999";
	printf("%d\n",atoi(s));
	printf("%d\n",ft_atoi(s));
	//printf("%d",s);
	return 0;
}