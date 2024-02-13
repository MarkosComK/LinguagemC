/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0310.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:22:00 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/13 16:32:03 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	salary;
	float	tax;

	printf("Insert your salary: ");
	scanf("%f", &salary);
	if (salary > 1000)
		tax = 0.05;
	else if (salary <= 1000 && salary > 0)
		tax = 0.07;
	else
	{
		printf("Invalid salary\n");
		return (0);
	}
	printf("Your rise is %.2f (%.2f%%)\n", salary * tax, tax * 100);
	return (0);
}
