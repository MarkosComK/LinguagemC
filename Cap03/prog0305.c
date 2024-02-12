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

	printf("Type first value: ");
	scanf("%d", &n1);
	printf("Type second value: ");
	scanf("%d", &n2);
	if (n1 >= n2)
		printf("%d : %d", n2, n1);
	else
		printf("%d : %d", n1, n2);
	return (0);
}
