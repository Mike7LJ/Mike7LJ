#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    char tmp[20];
    printf("Enter The String: ");
    fgets(str,sizeof(str), stdin);
    str[strlen(str)-1] = '\0'; // Remove the newline character if present
    strcpy(tmp, str); // Copy the string to another variable
    // This line is commented out to avoid modifying the string
    
    if(strcmp(tmp,str)==0){
        printf("The Two Strings are equal\n");
    }else{
        printf("The Two Strings are not equal\n");
    }
    // printf("The String:%s", str); // This will print the string with the newline

}