/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0325.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:33:00 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/20 16:54:51 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	month;
	
	printf("type a number for month: ");
	scanf("%d", &month);

	switch (month)
	{
		case 1:
			printf("month %d has 31 days.\n", month);
			break;
		case 2:
			printf("month %d has 28 days.\n", month);
			break;
		case 3:
			printf("month %d has 31 days.\n", month);
			break;
		case 4:
			printf("month %d has 30 days.\n", month);
			break;
		case 5:
			printf("month %d has 31 days.\n", month);
			break;
		case 6:
			printf("month %d has 30 days.\n", month);
			break;
		case 7:
			printf("month %d has 31 days.\n", month);
			break;
		case 8:
			printf("month %d has 31 days.\n", month);
			break;
		case 9:
			printf("month %d has 30 days.\n", month);
			break;
		case 10:
			printf("month %d has 31 days.\n", month);
			break;
		case 11:
			printf("month %d has 30 days.\n", month);
			break;
		case 12:
			printf("month %d has 31 days.\n", month);
			break;
		default:
			printf("Undefined month");
	}
	return (0);
}
