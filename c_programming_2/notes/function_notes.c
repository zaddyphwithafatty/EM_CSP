//em 7th function notes
#include <stdio.h>

void birthday (char* name, int age){
    printf("happy birthday to you\n");
    printf("happy birthday to you\n");
    printf("happy birthday dear %s\n", name);
    printf("happy birthday to you\n");
    printf("happy birthday %s you are %d\n", name, age);

}

int mul(int x, int y){
    return x *y;
}

float get_number(char*type){
    float value;
    printf("how many %s do you have: ");
    scanf("%f", &value);
    return value;
}
int main (void){
    birthday ("jesus", 15);
    birthday ("gwen", 14);
    birthday ("cecily", 16);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,8));
    float pencils = get_numers("notebooks");
    float notebooks = get_number("notebooks");
    printf("you have %.2f penicls and %.2f notebooks!", pencils, notebooks);
    return 0;
}

//What a function is
//a new type of code that when called will play te code inside iy

//Why we use functions
//saves space an makes the code look cleaner

//How to write a function in C

//What are arguments and parameters?
//arguments -

//How do arguments and parameters work together?
//arguents defines the statements and parameters take it an dsee if it is called
//How to use parameters and arguments in C
// make a variable in the function and call it 
// example bithday("jesus")

//What are return statements?
// when we take specific information and put it in the called function

// return the statements and out puts them into place
//
//How do return statements change how you define a function in C?
//it changes what is called and the value it is

//What do return statements do with the information?
