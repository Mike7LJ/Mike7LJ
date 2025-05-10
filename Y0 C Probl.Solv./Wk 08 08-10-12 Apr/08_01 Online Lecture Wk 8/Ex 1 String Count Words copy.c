#include <stdio.h> // capitalize first letter from each word

#include <string.h>

void main(){
    char str[20];
    
    printf("Enter The String: ");
    fgets(str,sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    int n=strlen(str);
    int first=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && first==0){
            if(str[i]>='a' && str[i]<='z'){
                str[i] = str[i] - 32;
                first=1;
            }else if{(str[i]>='A' && str[i]<='Z')
                first=1;
            }

        }
    }
    printf("The updated string: %s\n", str);
}