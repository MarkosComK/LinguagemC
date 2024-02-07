/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0301.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:10:52 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/07 18:10:57 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	printf("introduza dois inteiros: ");
	scanf("%d%d", &x, &y);
	printf("the result of %d == %d is: %d\n", x, y, x == y);
	printf("the result of %d > %d is: %d\n", x, y, x > y);
	printf("the result of %d >= %d is: %d\n", x, y, x >= y);
	printf("the result of %d < %d is: %d\n", x, y, x < y);
	printf("the result of %d <= %d is: %d\n", x, y, x <= y);
	printf("the result of %d != %d is: %d\n", x, y, x != y);
	return(0);
}
