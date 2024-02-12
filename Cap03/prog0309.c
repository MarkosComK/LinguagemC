/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0309.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:36:08 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/12 21:52:49 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	salary;
	char	maritial_status;
	float	tax;

	printf("What is your salary ");
	scanf("%f", &salary);
	printf("What is your maritial status? ");
	scanf(" %c", &maritial_status);
	if (maritial_status >= 65 && maritial_status <= 90)
		maritial_status += 32;
	if (maritial_status == 'c' || maritial_status == 'm')
	{
		tax = salary * 0.10;
		printf("your salary after tax (10%%) is %.2f", salary - tax);
	}
	else
	{
		tax = salary * 0.9;
		printf("your salary after tax (9%%) is %.2f", salary - tax);
	}
	return (0);
}
