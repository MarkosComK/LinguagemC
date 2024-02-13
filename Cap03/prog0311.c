/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0311.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:33:49 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/13 16:45:14 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	maritial_status;

	printf("What is your maritial status: ");
	scanf("%c", &maritial_status);
	if (maritial_status >= 65 && maritial_status <= 90)
		maritial_status += 32;
	switch (maritial_status)
	{
		case 'm':
			printf("Married");
			break;
		case 's':
			printf("Single");
			break;
		case 'd':	
			printf("Divorced");
			break;
		case 'w':
			printf("Widowed");
			break;
		default:
			printf("Invalid maritial status!");
	}
	printf("\n");
	return (0);
}
