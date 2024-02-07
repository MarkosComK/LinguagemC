/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0303.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:11:09 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/07 18:11:10 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	value;
	printf("Insert a intenger: ");
	scanf("%d", &value);
	if (value == 0)
		printf("The inputed value is equal to  0\n");
	else
		printf("The inputed value is different than 0\n");
	return (0);

}
