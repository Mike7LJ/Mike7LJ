#include <stdio.h>

int main()
{
	int day, month;
	// int current date;
	printf("Enter the day: ");
	scanf("%d", &day);

	printf("Enter the month: ");
	scanf("%d", &month);

	// if there should be a condition
	if (day == 1 && month == 4)
	{printf("It is April's fools day!");}
	if (day == 1 && month == 1)
	{printf("It is New Year's Day!");}
	if (day == 2 && month == 1)
	{printf("It's your Birthday!");}
	if (day == 4 && month == 6)
	{printf("It's Independence Day in the US!");}
	return 0;
}