#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    printf("Enter The String1: ");
    fgets(str,sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    for (int =0;str[i]!='\0';i++){
        if (str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - 32;

        else if(str[i]>='A' && str[i]<='Z'){
                str[i] = str[i] + 32;
            }
        printf("The String:%s", str);
        }
    }