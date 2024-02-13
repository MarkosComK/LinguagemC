/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0317.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:28:48 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/13 17:36:28 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		hours;
	long	secs;

	printf("How many hours would you like to convert: ");
	scanf("%d", &hours);
	secs = hours * 3600;
	printf("%d hrs has %li secs", hours, secs);
	return (0);
}
