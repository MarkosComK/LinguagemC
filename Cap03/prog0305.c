/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0305.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:33:24 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/12 20:33:28 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;
	int	temp;

	printf("Type two values: ");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	printf("The Values are: %d and %d", n1, n2);
	return (0);
}
