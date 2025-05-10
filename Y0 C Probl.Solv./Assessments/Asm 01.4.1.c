#include <stdio.h> /*  Task 4: Personal Budget Tracker - Complete all previous steps, then:
•	Allow the user to specify the number of expense categories dynamically. •	Retrieve expenses for the chosen categories for two weeks. 
•	Print a detailed breakdown of expenses for each week. •	Compare total expenses between weeks and identify increases, decreases, or no changes in each category. */
int main(){
    int numCategories;
    printf("Please specify a number for expense categories: ");
    scanf("%d", &numCategories);
    // Prompt the user to enter the number of categories
    // check if the number of categories is valid
    if (numCategories <= 0) {
        printf("Invalid number of categories. Please enter a positive number.\n"); //check if integer is positive
        return 1; // Exit the program with an error code
    }
    int Week1Expenses[numCategories];   // Declare arrays to store expenses for each category
    int Week2Expenses[numCategories];   // .. for two weeks; // .. using the user-defined number of categories; // .. to dynamically allocate memory for the arrays

    // Retrieve expenses for the chosen categories for two weeks.
    char categories[numCategories][10];         // Assuming category names are less than 10 characters // + 1 for null terminator
    for (int i = 0; i < numCategories; i++) {   // Loop through each category;  // Prompt the user to enter the name of the category and expenses for both weeks
        printf("Please specify the NAME of category %d: ", i + 1);
        scanf("%s", categories[i]);
        printf("Please specify First week's %s expenses in £: ", categories[i]);
        scanf("%d", &Week1Expenses[i]);
        printf("Please specify Second week's %s expenses in £: ", categories[i]);
        scanf("%d", &Week2Expenses[i]);
    }
    // Print a detailed breakdown of expenses for each week.
    printf("\nDetailed breakdown of expenses:\n");
    printf("Category\tWeek 1\tWeek 2\n");       // Print header using tab spacing for clarity/readability
    for (int i = 0; i < numCategories; i++) {   // Loop through each category;  // Print the category name and expenses for both weeks
        printf("%s\t\t£%d\t£%d\n", categories[i], Week1Expenses[i], Week2Expenses[i]);
    }
    // Compare total expenses between weeks and identify increases, decreases, or no changes in each category.
    printf("\nComparing total expenses between weeks:\n");
    for (int i = 0; i < numCategories; i++) {   // Loop through each category;  // Compare the expenses for both weeks and print the result.
        if (Week1Expenses[i] > Week2Expenses[i]) {
            printf("In %s, you spent more in Week 1 (£%d) than in Week 2 (£%d).\n", categories[i], Week1Expenses[i], Week2Expenses[i]);
        } else if (Week1Expenses[i] < Week2Expenses[i]) {
            printf("In %s, you spent less in Week 1 (£%d) than in Week 2 (£%d).\n", categories[i], Week1Expenses[i], Week2Expenses[i]);
        } else {
            printf("In %s, spending remained the same between Week 1 and Week 2 (£%d).\n", categories[i], Week1Expenses[i]);
        }
    }
    printf("\n");
    return 0;}