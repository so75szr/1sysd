#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int age;
  printf("Quel âge avez-vous ? ");
  scanf("%d", &age);
  
  if (age > 42) {
    printf("Ok boomer\n");
  } else {
    printf("Time to learn UNIX\n");
  } 
  return 0;
}

