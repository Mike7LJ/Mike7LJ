#include <stdio.h>

int main()
{
  int age, myAge = 25;
  // int myAge = 25;
  printf("How old are you?");
  scanf("%d", &age);

  // if there should be a condition
  if (age == myAge)
  {
    printf("Hey, we are the same age!");
  }
  return 0;
}
