// em 7th conditional notes
#include <stdio.h>
#include <string.h>

int main(void) {
    int grade;
    char name[50];
    printf("what is your name:");
    scanf("%d", &name);


    // rintf("%d\n", strcmp(name, "ms.LaRose"));
    if(strcmp(name, "Ms.LaRose") ==0 )
    printf("%d", strcmp(name, "Ms.LaRose"));
    if(name == "Ms. LaRose"){
        printf("you dont have a grade!\n");
    }else if(grade >= 90){
        printf("you have an A! \n");
    }else if(grade >= 80){
        printf("you have a B!\n");
    }else if(grade >= 70){
        printf("you have a C\n");
    }else{
        printf(" you are failing :(\n");
    }
    return 0;
}








//What puts something inside of the “if” statement?
// the curly brakets. these {}

//How are conditions written in C?
// if (){}

//How do we write elif conditions in C?
//else if

//When do else conditions run?

//What are the 3 logical operators in C?
//&& 
//||
//!