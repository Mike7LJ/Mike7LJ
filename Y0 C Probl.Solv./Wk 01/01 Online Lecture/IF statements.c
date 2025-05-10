/*
If-Statements
1. Write a program that:
	Asks the user how old they are (which the user should entre via the console screen
	If the user enters an age is 0 or less,
	display " wow, people satart using computers early")
*/

#include <stdio.h>

int main()
{
	int age;
	printf("How old are you?");
	scanf("%d", &age);

	if (age <= 7)
	{
		printf("wow, people satart using computers early");
	}
	return 0;
}
// gcc task_1.c -o task_1