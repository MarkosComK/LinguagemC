/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0316.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:11:03 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/13 17:24:39 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n1;
	int	n2;
	char	operation;
	int	result;

	n1 = atoi(av[1]);
	n2 = atoi(av[3]);
	operation = av[2][0];
	if (operation == '+')
		result = n1 + n2;
	else if (operation == '-')
		result = n1 - n2;
	else if (operation == '*' || operation == 'x' || operation == 'X')
		result = n1 * n2;
	else if (operation == 92 || operation == 47 || operation == 58)
		result = n1 / n2;
	else
	{
		printf("Invalid operation!");
		return (0);
	}
	printf("%i %c %i = %i\n", n1, operation, n2, result);
	return (0);
}
