#include <stdio.h>
#include <stdlib.h>
// need these instructions

// main is a method
// main will get executed when we run our program

// build/compile c file is first step
// then have to run it
int main()
{

  char characterName[] = "Theo";
  int characterAge = 67;

  printf("There once was a man named %s.\n", characterName);
  printf("He was %d years old.\n", characterAge);

  characterAge = 30;
  printf("He really liked the name %s.\n", characterName);
  printf("But he did not like being %d\n", characterAge);
  
  return 0;
}

