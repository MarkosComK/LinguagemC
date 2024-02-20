/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0326.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:56:49 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/20 17:11:52 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	month;
	int	days;
	
	printf("Insert a number for month: ");
	scanf("%d", &month);
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = days + 1;
		case 4:
		case 6:
		case 9:
		case 11:
			days = days + 2;
		default:
			days = days + 28;
	}
	printf("The month %d has %d days\n", month, days);
	return (0);
}