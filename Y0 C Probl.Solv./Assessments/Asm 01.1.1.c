
#include <stdio.h> // I have included the standard input-output library to use printf function
// .. following, I have added a comment to explain the purpose of the program

int main(){
    int Rent=300;           // I have assigned an exact value to the Rent integer variable directly in the code
    int Utilities=100;      // I have assigned an exact value to the Utilities integer variable directly in the code
    int Groceries=150;      // I have assigned an exact value to the Groceries integer variable directly in the code

    printf("Total Weekly Expense is: £%d\n\n", Rent+Utilities+Groceries); 
    // I have printed the total weekly expense using printf function
    // .. displaying the result in a formatted string using the %d format placeholder for integers
    // I have used the addition operator (+) to calculate the total weekly expense by adding the three variables together
    // .. automatically replacing the placeholder from the string with the result of the arithmetic operation - argument

    // I have used the \n\n escape sequence to move to the next lines after printing the total weekly expense

    return 0; // I have returned 0 to show that the program has executed well

}