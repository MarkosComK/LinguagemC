#include <stdio.h>

int	main(void)
{
	int	value;
	printf("insert a value: ");
	scanf("%d", &value);
	if (value >= 0)
		printf("%d is positive.\n", value);
	else
		printf("%d is negative.i\n", value);
	return (0);
}
