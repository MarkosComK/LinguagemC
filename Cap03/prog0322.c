/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0322.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:33:22 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/18 22:18:46 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int		i;

	printf("Insert a value: ");
	scanf("%d", &i);
	switch (i)
	{
		case 0:
			printf("The value is zero\n");
			break;
		default:
			printf("Value is not 0\n");
	}
	return (0);
}
