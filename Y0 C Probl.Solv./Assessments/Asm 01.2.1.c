
#include <stdio.h> // I have included the standard input-output library to use printf function
// .. following, I have added a comment to explain the purpose of the program

/*  : Personal Budget Tracker - The goal of this task is to create a program that tracks weekly expenses for different categories
(e.g., Groceries, Rent, Utilities) and provides insights into spending trends over one or more weeks. The program will focus on variables, arithmetic operators,
output formatting, user input, validations, logical operators, and conditional statements.
• Retrieve expenses for Groceries, Rent, and Utilities from the user.
• Add a weekly budget limit and compare it with the total expenses.
• Print whether the user is within budget or has exceeded the budget.   */

int main(){
    
    int Week1Rent, Week1Utilities, Week1Groceries; // I am declaring variables to name weekly expenses

    printf("Please specifi this week's Rent expenses in £: "); // I have printed a message to ask the user to enter their 1st week's Rent expenses
    scanf("%d",&Week1Rent); // I have used the scanf function to read the user input and store it in the Week1Rent variable
    // .. I have used the %d format specifier to read an integer value from the user
    // .. I have used the & operator to get the address of the Week1Rent variable
    printf("Please specifi this week's Utilities expenses in £: "); // I have printed a message to ask the user to enter their 1st week's Utilities expenses
    scanf("%d",&Week1Utilities); // I have used the scanf function to read the user input and store it in the Week1Utilities variable

    printf("Please specifi this week's Groceries expenses in £: "); // I have printed a message to ask the user to enter their 1st week's Groceries expenses
    scanf("%d",&Week1Groceries); // I have used the scanf function to read the user input and store it in the Week1Groceries variable

    int WeeklyBudgetLimit=500; // I have assigned a value of £500 to the WeeklyBudgetLimit variable
    // .. I have used the int data type to declare the variable
    // .. I have used the = operator to assign a value to the variable
    printf("\nComparing the total expenses of Week1 with the Weekly Budget Limit...\n");
        // I have printed a message to indicate that the program is comparing the total expenses with the budget limit
        if (Week1Rent+Week1Utilities+Week1Groceries>WeeklyBudgetLimit) // I have used the if statement to check if the total expenses are greater than the budget limit
            printf("You have exceeded the weekly budget limit of £%d\n You need to be more careful! Now it's tea & biscuits for you.\n\n", WeeklyBudgetLimit); 
            // I have printed a message to indicate that the user has exceeded their budget limit
        else // I have used the else statement to handle the case where the total expenses are less than or equal to the budget limit
            printf("You are within the weekly budget limit of £%d\n Congrats for being diligent!\n\n", WeeklyBudgetLimit); 
            // I have printed a message to indicate that the user is within their budget limit
  
    return 0; // I have asked program ro return 0 to show that the program has executed well
}