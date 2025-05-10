// confirmation that input password has more than 8 characters
// and contains at least one digit

#include <stdio.h>
#include <string.h>

int main(){
    int check = 0; // Flag to check if the password is valid
    while(check == 0){
        // I have declared a character array 'password' to store the password
        // The array size is 20, which means it can hold a password of up to 19 characters plus the null terminator
        // I have declared an integer variable 'length' to store the length of the password
        // I have declared an integer variable 'hasDigit' to check if the password contains at least one digit
        // I have declared an integer variable 'i' to use as a loop counter
        char password[20];
        int length = 0; // Length of the password is initially 0 to compare with 8
        int hasDigit = 0; // Flag to check if the password contains at least one digit
        int i;

        printf("Enter a password: ");   // Prompt the user to enter a password
        scanf("%s", password);  // Read the password from the user using scanf function
                                    // The %s format specifier is used to read a string input
                                    // The input is stored in the 'password' array
        length = strlen(password);  // Calculate the length of the password using strlen function
                                    // The length is the number of characters in the string excluding the null terminator
                                    // The password is stored in the array 'password' and the length is calculated using strlen function
        if (length >8){ // Check if the password length is more than 8 characters
            
            for (i = 0; i < length; i++) {  // Loop through each character in the password to check for digits, Check if the password contains at least one digit
                if (password[i] >= '0' && password[i] <= '9') { // Check if the character is a digit
                    hasDigit = 1; // Set the flag to true if a digit is found
                    break; // No need to check further, a digit was found
                }
            }

            // Print the result based on the checks
            if (hasDigit) { // If the password contains at least one digit
                printf("This password is valid.\n\n");  // Print a message indicating that the password is valid
                break; // Exit the loop if the password is valid
            } else {    // If the password does not contain any digits
                printf("For a password to be valid, it must contain at least one digit.\n");    // Print a message indicating that the password is invalid
            }   
        } else {    // If the password length is not more than 8 characters
            printf("Current password is too short, it must be more than 8 characters long.\n");   // Print a message indicating that the password is too short
        }

    
}
    return 0;   // Return 0 to indicate successful execution of the program
}