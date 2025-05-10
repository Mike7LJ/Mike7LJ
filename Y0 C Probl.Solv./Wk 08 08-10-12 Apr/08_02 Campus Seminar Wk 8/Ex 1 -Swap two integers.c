#include <stdio.h> // swap two integers values
#include <string.h>

int main(){
    int num1,num2;
    printf("Enter TWO integers: ");
    scanf("%d %d",&num1,&num2);
    printf("Initial Values before swap: %d %d\n",num1,num2);
    printf("After swap values: %d %d\n",num2,num1);
    return 0;
}