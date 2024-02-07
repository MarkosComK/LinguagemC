#include <stdio.h>

int	main(void)
{
	int	value;
	printf("Insert a intenger: ");
	scanf("%d", &value);
	if (value == 0)
		printf("The inputed value is equal to  0\n");
	else
		printf("The inputed value is different than 0\n");
	return (0);

}
