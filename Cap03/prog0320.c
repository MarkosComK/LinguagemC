/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0320.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:28:48 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/14 10:39:28 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		hours;
	long	result;
	char	conversion_type;

	printf("How many hours would you like to convert: ");
	scanf("%d", &hours);
	printf("Would you like to conter to Minutes, Seconds ou Decims: ");
	scanf(" %c", &conversion_type);
	result = hours;
	switch (conversion_type)
	{
		case 'd':
			result *= 10;
		case 's':
			result *= 60;
		case 'm':
			result *= 60;
	}
	printf("%d hrs has %li \n", hours, result);
	return (0);
}
