/*
Task 3
Create a program that calculates how much someone would have to pay to travel on a bus, based on their age.

Create a variable called state and assign it a value of 1. ===ingt sstate = 1
The program should continue running while state is 1. while (state==1)
Prompt the user to enter their age. printf and scanf
Based on the entered age, calculate the bus fare using simple fare rules
(e.g., free for children under 5, discounted fare for seniors). children, discount, adult
After displaying the fare, ask the user if they want to run the program again. printf and scanf

The user should enter 1 to continue or 0 to exit.

Note: ensurethr users enters a valid number for age (no negative or text)
*/

#include <stdio.h>

int main(){
	int age, state=1;
	float fare;

	while (state==1){
		printf("Enter your age:");
		scanf("&d", age);

		if (age <= 5)
		{
			fare = 0.0;
			printf("you are infant. Ticket free.\n");
		}
		else if (age < 16)
		{
			fare = 5.0;
			printf("you ticket cost £.%2f. \n", fare);
		}
		else if (age >= 65)
		{
			fare = 10;
			printf("You pensioner, ticket cost £%.2f. \n", fare);
		}
		else
		{
			fare = 15;
			printf("you pay full. Cost £%.2f.\n");
		}
	}
	printf("Total ticket price: $%.2f.\n", fare);
	printf("Bokk moere tickets select 1, to exit 0:");
	scanf("%d", &state);
	return 0;
}