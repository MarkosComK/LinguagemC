#include <stdio.h>

int	main(void)
{
	unsigned int	day;
	unsigned int	month;
	unsigned int	year;

	printf("Insert a day of the month: ");
	scanf("%d", &day);
	printf("\nInsert a month: ");
	scanf("%d", &month);
	printf("\nInsert a year: ");
	scanf("%d", &year);
	if (month < 10 || day < 10)
		printf("\nDate inserted: \n 0%d/0%d/%d\n", day, month, year);
	else if (month > 9 || day > 9)
		printf("\nDate inserted: \n %d/%d/%d\n", day, month, year);
	return(0);
}
