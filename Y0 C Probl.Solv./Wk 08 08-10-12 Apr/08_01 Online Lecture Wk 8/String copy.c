#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    printf("Enter The String: ");
    gets("%s", str);
    printf("The String:%s", str);
}