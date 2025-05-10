/*
Task 4
Repeat task 3. However,  instead of getting the user to enter either 1 or 0 to control the loop:

Use the char values 'y' and 'n'
*/

#include <stdio.h>

int main(){
	int age;
	char choice;
	float fare;

	do
	{
		printf("Enter your age:");
		scanf("&d", age);

		if (age <= 5)
		{
			fare = 0.0;
		}else if (age < 16)
		{
			fare = 5.0;
		}else if (age >= 65)
		{
			fare = 10;
		}else{
			fare = 15;
		}
	printf("Total ticket price: $%.2f.\n", fare);
	printf("Bokk moere tickets select 1, to exit 0:");
	scanf("%d", &choice);
	} while ( choice =='y' || choice=='Y');
	printf("Thank You!");
	return 0;
}