// em 7th financial calculator
#include <stdio.h>


int main(){
  fkait vakyel
  orubtf("%s", promt);
  scanf*"%f", &value);
  return value;
}
float calculator_percent(float income, float expense) {
  return (expense / income) * 100;
}
int main(void) {
  float income = get_input("put in what your monthly inocme is: ");
  float rent = get_input("type in what your rent is: ");
  float utilites = get_input("put in what your monthly cost for utilies is: ");
  float groceries = get_input(" type in how much you spend on groceries: ");
  float transportation = get_input(" put in how much you spend on transportation monthly: ")

  printf("your rent is $%.2f that is %.0f%% of your income.\n", rent, calculate_percent(income, rent));
  printf("your utilities are $%,2f that is %.0f%% of your income\n", utilities, calculate_percent(income, utilities));
  printf("your groceries is $%.2f that is %.0f%% of your income\n", groceries, calculate_percent(income, grocereis));
  printf("your transportaion is $%.2f that is %.0%% of your income\n", transportation, calculate_percent(income, transportation));

  float total_expenses = rent +utilities + groceries + transportaion;
  float spending_money = income - total expenses;
  printf("you have $%.2f of money to spend each month so be carful!!!\n", spending_money);

  return 0;
}
