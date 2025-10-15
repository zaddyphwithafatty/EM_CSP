// em 7th fizzbuzz
#include <stdio.h>

int main (void){
    int num = 1;

    for(int num=1; num<=50; num++){
        if(num % 3 ==0){
            printf("fizz\n");
        }
        else if(num % 5 == 0){
            printf("buzz\n");
        }
        else if(num % 3 == 0 && num % 5 ==0){
            printf("fizzbuzz\n");
        }
       } 
       num++;

    return 0; 
}