// em 7th silly sentence
#include <stdio.h>
#include <string.h>

int main(void){
  char noun[20];
  printf("type in a noun");
  scanf("%s", noun);

  char color[20];
  printf("give me your favorite color");
  scanf("%s", color);

  char food[20];
  printf("what is your favorite food to eat");
  scanf("%s", food);

  printf("i walked into %s and the couch was %s and there was a plate of %s.\n", noun, color, food);

 

  return 0;
}
