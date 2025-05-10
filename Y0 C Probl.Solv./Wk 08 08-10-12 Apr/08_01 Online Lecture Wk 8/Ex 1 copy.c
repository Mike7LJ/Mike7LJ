#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    printf("Enter The String1: ");
    fgets(str,sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    
        for (str[i]=0;str[i]!='\0';i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') c++;
            }
        printf("The String:%s", str);
        printf("The Number of Vowels in the String: %d", c);
        
    }