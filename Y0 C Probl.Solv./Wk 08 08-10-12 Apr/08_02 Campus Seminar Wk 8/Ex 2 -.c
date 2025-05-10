#include <stdio.h> // swap two string values
#include <string.h>

int main(){
    char char1="X", char2="Y", temp;
    
    printf("Initial values before swap: %d %d\n", char1, char2);
    // Swap logic
    // Using a temporary variable
    // to hold the value of num1
    // and then assign num2 to num1
    // and finally assign temp to num2
    temp = char1;
    char1 = char2;
    char2 = temp;
    
    printf("After swap values: %d %d\n", char1, char2);
    
    return 0;
}