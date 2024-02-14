/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0319.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:28:48 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/14 10:35:26 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		hours;
	long	result;
	char	conversion_type;
	char	*string;

	printf("How many hours would you like to convert: ");
	scanf("%d", &hours);
	printf("Would you like to conter to Minutes, Seconds ou Decims: ");
	scanf(" %c", &conversion_type);
	switch (conversion_type)
	{
		case 'm':
			result = hours * 60;
			string = "minutes";
			break;
		case 's':
			result = hours * 3600;
			string = "seconds";
			break;
		case 'd':
			result = hours * 36000;
			string = "decimals of seconds";
			break;
		default:
			printf("Invalid parameter!\n");
			return (0);
	}
	printf("%d hrs has %li %s \n", hours, result, string);
	return (0);
}
