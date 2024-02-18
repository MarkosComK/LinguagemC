/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0321.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:33:22 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/18 22:11:27 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int		i;

	printf("Insert a value: ");
	scanf("%d", &i);
	if (i != 0)
	{
		printf("The value %i is != 0\n", i);
	}
	if (i > 0)
	{
		printf("The value %i is > 0\n", i);
	}
	if (i < 0)
	{
		printf("The value %i is <  0\n", i);
	}
	if (!(i == 0))
	{
		printf("The value !(%i == 0)\n", i);
	}
	else
	{
		printf("Value is 0\n");
	}
	return (0);
}
