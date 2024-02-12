/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0307.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:12:01 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/12 21:28:27 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	salary;
	float	tax;

	printf("Insert your salary: ");
	scanf("%f", &salary);
	if (salary < 1000)
		tax = 0.05;
	else if (salary >= 1000 && salary < 5000)
		tax = 0.11;
	else if (salary >= 5000)
		tax = 0.35;
	printf("Your gross pay is %.2f\n", salary);
	printf("Your net pay is %.2f\n", salary - (salary * tax));
	printf("Your tax is %.2f\n", salary * tax);
	return (0);
}
