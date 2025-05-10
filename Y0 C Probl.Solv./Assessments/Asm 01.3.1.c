#include <stdio.h> /* Task 3 (for marks 60-69): Complete all previous steps, then: •	Allow the user to input expenses for two consecutive weeks.
    •	Calculate and print the total expense for each week. •	Compare expenses between the two weeks and print whether spending increased, decreased, or remained the same. */
int main(){
    int Week1Rent, Week1Utilities, Week1Groceries;

    printf("Please specify first week's Rent expenses in £: ");
    scanf("%d",&Week1Rent);
    printf("Please specify first week's Utilities expenses in £: ");
    scanf("%d",&Week1Utilities);
    printf("Please specify first week's Groceries expenses in £: ");
    scanf("%d",&Week1Groceries);

    int Week2Rent, Week2Utilities, Week2Groceries; // I have declared variables to name the second week's expenses
    printf("Please specify second week's Rent expenses in £: "); // I have printed a message to ask the user to enter their 2nd week's Rent expenses
    scanf("%d",&Week2Rent); // I have used the scanf function to read the user input and store it in the Week2Rent variable
    printf("Please specify second week's Utilities expenses in £: "); // I have printed a message to ask the user to enter their 2nd week's Utilities expenses
    scanf("%d",&Week2Utilities); // I have used the scanf function to read the user input and store it in the Week2Utilities variable
    printf("Please specify second week's Groceries expenses in £: "); // I have printed a message to ask the user to enter their 2nd week's Groceries expenses
    scanf("%d",&Week2Groceries); // I have used the scanf function to read the user input and store it in the Week2Groceries variable

    printf("\nCalculating the total expenses for Week 1...\n"); // I have used the printf function to print a message indicating that the program is calculating the total expenses for Week 1
    int TotalWeek1 = Week1Rent + Week1Utilities + Week1Groceries;
    printf("Total Weekly Expense for Week 1 is: £%d\n", TotalWeek1); // I have printed the total weekly expense for Week 1 using printf function
    printf("\nCalculating the total expenses for Week 2...\n"); // I have used the printf function to print a message indicating that the program is calculating the total expenses for Week 2
    int TotalWeek2 = Week2Rent + Week2Utilities + Week2Groceries; // I have calculated the total weekly expense for Week 2 by adding the three variables together
    printf("Total Weekly Expense for Week 2 is: £%d\n", TotalWeek2); // I have printed the total weekly expense for Week 2 using printf function

    printf("\nComparing the total expenses of Week 1 and Week 2...\n"); // I have printed a message to indicate that the program is comparing the total expenses of Week 1 and Week 2
    if (TotalWeek1 > TotalWeek2) // I have used the if statement to check if the total expenses of Week 1 are greater than the total expenses of Week 2
        printf("You have spent more in Week 1 than in Week 2.\n\n"); // I have printed a message to indicate that the user has spent more in Week 1 than in Week 2
    else if (TotalWeek1 < TotalWeek2) // I have used the else if statement to check if the total expenses of Week 1 are less than the total expenses of Week 2
        printf("You have spent less in Week 1 than in Week 2.\n\n"); // I have printed a message to indicate that the user has spent less in Week 1 than in Week 2
    else // I have used the else statement to handle the case where the total expenses of Week 1 are equal to the total expenses of Week 2
        printf("Your spending has remained the same between Week 1 and Week 2.\n\n"); // I have printed a message to indicate that the user's spending has remained the same between Week 1 and Week 2

    return 0;}