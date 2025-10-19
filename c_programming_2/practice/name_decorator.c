// em 7th name decorator
#include <stdio.h>
#include <string.h>

int main(void){
  char name[20];
  printf("what is your name");
  scanf("%s", name);
  while (getcahr() != '\n');

  char decorated name[40] = "$$%$%^";
  strcat(decorated_name, name);
  strcat(decorated_name, " @$&%#&");
  printf("%s\n", decorated_name);

return 0;
}
