/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog0324.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:33:00 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/20 16:53:21 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_dup(char *str)
{
	char	*dup;
	int	i;

	dup = (char *)malloc(sizeof(char) * 3 + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < 3)
	{
		if (str[i] >= 65 && str[i] <= 90)
			dup[i] = str[i] + 32;
		else
			dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

int	main(void)
{
	char	month[15];
	char	*cpy;

	printf("type a month: ");
	scanf("%s", month);


	cpy = ft_dup(month);
	if (strcmp(cpy, "jan") == 0)
		printf("%s has 31 days.\n", cpy);
	else if (strcmp(cpy, "feb") == 0)
		printf("%s has 28 days.\n", cpy);
	else if (strcmp(cpy, "mar") == 0)
		printf("%s has 31 days.\n", cpy);
	else if (strcmp(cpy, "may") == 0)
		printf("%s has 30 days.\n", cpy);
	else if (strcmp(cpy, "apr") == 0)
		printf("%s has 31 days.\n", cpy);
	else if (strcmp(cpy, "jun") == 0)
		printf("%s has 30 days.\n", cpy);
	else if (strcmp(cpy, "jul") == 0)
		printf("%s has 31 days.\n", cpy);
	else if (strcmp(cpy, "aug") == 0)
		printf("%s has 31 days.\n", cpy);
	else if (strcmp(cpy, "sep") == 0)
		printf("%s has 30 days.\n", cpy);
	else if (strcmp(cpy, "oct") == 0)
		printf("%s has 31 days.\n", cpy);
	else if (strcmp(cpy, "nov") == 0)
		printf("%s has 30 days.\n", cpy);
	else if (strcmp(cpy, "dec") == 0)
		printf("%s has 31 days.\n", cpy);
	free(cpy);
	return (0);
}