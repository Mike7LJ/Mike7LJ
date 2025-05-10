
int main() {
    int num1=45, num2=78, temp;
    
    printf("Initial values before swap: %d %d\n", num1, num2);
    
    // Swap logic
    // Using a temporary variable
    // to hold the value of num1
    // and then assign num2 to num1
    // and finally assign temp to num2
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("After swap values: %d %d\n", num1, num2);
    
    return 0;
}