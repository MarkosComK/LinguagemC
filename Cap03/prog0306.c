/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0306.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:53:27 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/12 21:04:37 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	salary;

	printf("What is your salary? ");
	scanf("%f", &salary);
	if (salary <= 0)
		printf("Salary cannot be zero or negative.\n");
	else if (salary > 1000)
		printf("Your tax is %.2f (10%%)\n", salary / 100 * 10);
	else
		printf("Congratulations! You don`t pay any taxes.\n");
	return (0);
}
