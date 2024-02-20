/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0327.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:33:25 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/20 17:41:36 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	day, month, year;
	
	printf("Data: dd mm yyyy: ");
	scanf("%d %d %d", &day, &month, &year);
	switch (month)
	{
		case 2:
			if (day >= 1 && day <= 28 + (year % 4 == 0))
				printf("Valid date!");
			else
				printf("Invalid date");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day >= 1 && day <= 30)
				printf("Valid date!");
			else
				printf("Invalid date");
			break;
		default:
			if (month < 1 || month > 12)
				printf("Invalid date!");
			else
			{
				if (day >= 1 && day <= 30)
					printf("Valid date!");
				else
					printf("Invalid date");
			}
	}
	return (0);
}