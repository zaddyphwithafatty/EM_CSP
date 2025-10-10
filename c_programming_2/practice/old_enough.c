// em 7th old enough
#include <stdio.h>
#include <string.h>

int main(void) {
    int age;
    printf("how old are you:");
    scanf("%d", &age);

    if(age >= 18){
        printf("you are allowed to vote");
    }else if(age >= 16){
        printf("you are allowed to drive by yourself")


    return 0;
}