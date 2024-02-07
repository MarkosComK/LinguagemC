#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	printf("introduza dois inteiros: ");
	scanf("%d%d", &x, &y);
	printf("the result of %d == %d is: %d\n", x, y, x == y);
	printf("the result of %d > %d is: %d\n", x, y, x > y);
	printf("the result of %d >= %d is: %d\n", x, y, x >= y);
	printf("the result of %d < %d is: %d\n", x, y, x < y);
	printf("the result of %d <= %d is: %d\n", x, y, x <= y);
	printf("the result of %d != %d is: %d\n", x, y, x != y);
	return(0);
}
