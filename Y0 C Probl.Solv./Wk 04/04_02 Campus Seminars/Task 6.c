/*
Task 6
Write a program to reverse the digits of a given positive integer. Use a FOR Loop.

Input should be taken from user.

For example: If the input number is 12345, the output should be 54321.
*/
#include <stdio.h>
int main()
{
	int num, reverse;
	printf("Enter a positive integer: ");
	scanf("%d", &num);

	for (; num=1; num /= 10);
	{
		/* code */
	}
	printf("Your positive integer reversed is: ", num);
	return 0;
}