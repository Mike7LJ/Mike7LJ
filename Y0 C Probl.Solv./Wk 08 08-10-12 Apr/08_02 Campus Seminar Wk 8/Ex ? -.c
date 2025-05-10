// confirmation that password has more than 8 characters
// and contains at least one digit
#include <stdio.h>
#include <string.h>

int main(){
    char str1[]="Sun";
    char str2[]="Sky";
// int len=sizeof(str1)-1; // Exclude the null terminator

printf("Before swapping: str1=%s, str2=%s\n", str1, str2);

// Check if lengths are equal
if (strlen(str1) == strlen(str2)) {
    for(int i=0; i<strlen(str1); i++){
        // Swap logic - swap character by character
        // Using a temporary variable
        // to hold the value of str1[i]
        // and then assign str2[i] to str1[i]
        // and finally assign temp to str2[i]
        char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
    printf("After swapping: str1=%s, str2=%s\n", str1, str2);
    return 0;
}
}