#include <stdio.h> //string to count words
#include <string.h>

void main(){
    char str[20];
    
    printf("Enter The String: ");
    fgets(str,sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    int n=strlen(str);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && first==0){
            c++;
            first=1;
        }else if(str[i]==' '){
            first=0;
        }
    }
    printf("The Number of Words in the String: %d\n", c); // count spaces
}