// em 7th financial calculator
#include <stdio.h>

int main(){
  float income,rent,utilities,groceries, transportation, savings, remaining;
  printf("Enter monthly income:"); scanf("%f", &income);
  printf("Rent:"); scanf("%f", &rent);
  printf("utilities:"); scanf("%f", &utilities);
  printf("groceries:"); scanf("%f", &groceries);
  printf("transportation:"); scanf("%f", &transportation);

  savings = income*0.10;
  remaining= income-(rent+ utilities + groceries + transportation + savings);

  printf("\n--monthly summary --\n");
  printf("saving(10%%):2f\n", savings);
  printf("remaining to spend %.2f\n", remaining);
  printf("\n-- percent of income --\n");
  printf("rent %1f%%\n", (rent/income)*100);
  printf("utilities: %1f%%\n", (groceries/income)*100);
  printf("groceries: %1f%%\n", (groceries/income)*100);
  printf("transportation: %1f%%\n", (transportation/income)*100);
  printf("savings: %1f%%\n",(savings/income)*100);

  return 0;
}
