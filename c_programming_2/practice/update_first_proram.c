// em 7th frist program
#include <stdio.h>


int main(void){
  char name[99];
  printf("what is your name: \n");
  fgets(name, sizeof(name), stdin);
  printf("welcome %s", name);
  
  return 0;
}