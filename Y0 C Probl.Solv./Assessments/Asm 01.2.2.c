#include <stdio.h>

int main(){
    
    int Week1Rent, Week1Utilities, Week1Groceries;

    printf("Please specify this week's Rent expenses in £: ");
    scanf("%d",&Week1Rent);
    printf("Please specify this week's Utilities expenses in £: ");
    scanf("%d",&Week1Utilities);
    printf("Please specify this week's Groceries expenses in £: ");
    scanf("%d",&Week1Groceries);

    int WeeklyBudgetLimit=500;
    printf("\nComparing the total expenses of Week1 with the Weekly Budget Limit...\n");
    if (Week1Rent+Week1Utilities+Week1Groceries>WeeklyBudgetLimit)
        printf("You have exceeded the weekly budget limit of £%d\n You need to be more careful! Now it's tea & biscuits for you.\n\n", WeeklyBudgetLimit);
    else
        printf("You are within the weekly budget limit of £%d\n Congrats for being diligent!\n\n", WeeklyBudgetLimit);
  
    return 0;
    
}