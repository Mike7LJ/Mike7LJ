#include <stdio.h> // print a string without the null terminator
#include <string.h>

int main(){
    char str[20];
    printf("Enter The String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0'; // Remove the newline character
    int n = strlen(str);
    int first = 0;
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != ' ' && first == 0){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32; // Convert to uppercase
                first = 1;
            } else if(str[i] >= 'A' && str[i] <= 'Z'){
                first = 1; // Already uppercase
                
            }
        }
    }
}