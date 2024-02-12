/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0304.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:29:41 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/12 20:29:49 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	salary;

	printf("What is the salary?");
	scanf("%f", &salary);
	if (salary < 100000)
		salary += 1000;
	printf("Final value is: %.2f\n", salary);
	return (0);
}
