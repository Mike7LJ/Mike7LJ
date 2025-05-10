#include <stdio.h>

int main(){
    int Week1Rent, Week1Utilities, Week1Groceries;

    printf("Please specify first week's Rent expenses in £: ");
    scanf("%d",&Week1Rent);
    printf("Please specify first week's Utilities expenses in £: ");
    scanf("%d",&Week1Utilities);
    printf("Please specify first week's Groceries expenses in £: ");
    scanf("%d",&Week1Groceries);

    int Week2Rent, Week2Utilities, Week2Groceries;
    printf("Please specify second week's Rent expenses in £: ");
    scanf("%d",&Week2Rent);
    printf("Please specify second week's Utilities expenses in £: ");
    scanf("%d",&Week2Utilities);
    printf("Please specify second week's Groceries expenses in £: ");
    scanf("%d",&Week2Groceries);

    printf("\nCalculating the total expenses for Week 1...\n");
    int TotalWeek1 = Week1Rent + Week1Utilities + Week1Groceries;
    printf("Total Weekly Expense for Week 1 is: £%d\n", TotalWeek1);
    printf("\nCalculating the total expenses for Week 2...\n");
    int TotalWeek2 = Week2Rent + Week2Utilities + Week2Groceries;
    printf("Total Weekly Expense for Week 2 is: £%d\n", TotalWeek2);

    printf("\nComparing the total expenses of Week 1 and Week 2...\n");
    if (TotalWeek1 > TotalWeek2)
        printf("You have spent more in Week 1 than in Week 2.\n\n");
    else if (TotalWeek1 < TotalWeek2)
        printf("You have spent less in Week 1 than in Week 2.\n\n");
    else
    printf("Spending has remained the same between Week 1 and Week 2.\n\n");

    return 0;}