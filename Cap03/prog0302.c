/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0302.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:11:02 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/07 18:11:05 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	value;
	printf("insert a value: ");
	scanf("%d", &value);
	if (value >= 0)
		printf("%d is positive.\n", value);
	else
		printf("%d is negative.i\n", value);
	return (0);
}
