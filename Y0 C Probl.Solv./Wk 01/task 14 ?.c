#include <stdio.h>

int main(){
  int age;
  printf("How old are you? ");
  scanf("%d", &age);

  if (age <= 3)
  {
    printf("wow, people start using computers early.\n");
  }else{
    printf("Welcome to the club.\n"); 
  }
  return 0;
}
