/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0318.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:28:48 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/14 10:30:40 by marsoare         ###   ########.fr       */
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
	if (conversion_type == 'm')
	{
		result = hours * 60;
		string = "minutes";
	}
	else if (conversion_type == 's')
	{
		result = hours * 3600;
		string = "seconds";
	}
	else if (conversion_type == 'd')
	{
		result = hours * 36000;
		string = "decimals of seconds";
	}
	printf("%d hrs has %li %s \n", hours, result, string);
	return (0);
}
