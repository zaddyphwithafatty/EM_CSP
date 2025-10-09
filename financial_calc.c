// em 7th financial calculator
#include <stdio.h>

int main(){
  float income,rent,utilities,groceries, transportation, savings, remaining;
  printf("Enter monthly income:); scanf("%f", &income);
  printf("Rent:"); scanf("%f", &rent);
  printf("utilities:") scanf("%f", &utiliteis);
  printf("groceries:"); scanf("%f", &groceries);
  printf("transportation:") scanf("%f", &transportation);

  saving = income*0.10;
  remainting= income-(rent+ utilities + groceries + transportation + saving);

  print("\n--monthly summary --\n");
  printf("saving(10%%):2f\n", savings);
  printf("remaining to spend %.2f\n, remainging);
  printf("\n-- percent of income --\n");
  printf("rent %1f%%\n", (rent/income)*100);
  print("utilities: %1f%%\n", (groceries/income)*100);
  printf("groceries: %1f%%\n", (groceries/income)*100);
  printf("transportation: %1f%%\n", (transportation/inocme)*100);
  printf(savings: %1f%%\n",(saving/income)*100);

  return 0;
}
