#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    char tmp[20];
    
    printf("Enter The String: ");
    fgets(str,sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    int n=strlen(str);

    strcpy(tmp, str); // Copy the string to another variable
    for(int i=0;i<n/2;i++){
        char t=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=t;
    }
    if(strcmp(tmp,str)==0){
        printf("The String is a Palindrome\n");
    }else{
        printf("The String is not a Palindrome\n");
    }}