/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0314.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:52:41 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/13 17:05:55 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	salary;
	float	tax;
	char	sex;

	tax = 0;
	printf("Insert your salary: ");
	scanf("%f", &salary);
	printf("Insert your gender (M/F): ");
	scanf(" %c", &sex);
	if (sex >= 65 && sex <= 90)
		sex += 32;
	switch (sex)
	{
		case 'm':
			tax += 0.05;
		case 'f':
			tax += 0.10;
			break;
		default:
			printf("invalid gender!\n");
	}
	printf("Your total tax is %.2f\n", salary * tax);
	return (0);
}
