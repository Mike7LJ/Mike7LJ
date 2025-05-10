#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    printf("Enter The String: ");
    str[strlen(str)-1] = '\0'; // Remove the newline character if present
    // This line is commented out to avoid modifying the string
    // printf("The String:%s", str); // This will print the string with the newline
    // fgets(str, sizeof(str), stdin); // This is the safe way to read a string
    // Note: fgets includes the newline character in the string if there's space
    // in the buffer, so you may want to remove it if you don't want it.
    // str[strcspn(str, "\n")] = 0; // Remove the newline character if present
    // This line is commented out to avoid modifying the string
    // printf("The String:%s", str); // This will print the string with the newline
    // gets("%s", str); // This is unsafe and should be avoided
    // Use fgets instead
    // scanf("%s", str); // This is also unsafe for buffer overflow
    // Use fgets instead
    // fgets(str, sizeof(str), stdin); // This is the safe way to read a string
    // Note: fgets includes the newline character in the string if there's space
    // in the buffer, so you may want to remove it if you don't want it.
    fgets(str,sizeof(str), stdin);
    printf("The String: %s with lenght:%d",str,strlen(str));
}