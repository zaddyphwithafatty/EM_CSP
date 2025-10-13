// em 7th loop notes
#include <stdio.h>

int main(void){
    int nums[] = {1,654,4,56,8,742,5}; // this is an Array 
    char candies[][20] = {"kitkat", "skilltles", "nerds", "hershey", "reese's"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i < 5; i++){
        printf("%s, is my favorite candy!\n", candies[i]);
    }
    for(int num =1; num < 11; num++){
        printf("%d\n", num);
    }

    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }

    return 0;
}

//What is a loop? 
// its a set of code that repeats what is in it

//What are the two types of loops?
// two types are for and while
//What is iteration

//What are arrays? 
// they are what everyone calls lists except python

//How do you make lists in C? 
//exampe
//int nums[] = {1,654,4,56,8,742,5};

//How do you make for loops in C? 
//for(int x = 0; x < 7; x++){
        //printf("%d\n", nums[x]);

//How do you make while loops in C?
//examle
//int num = 0;
// while(num < 11){
//     printf("%d\n", num);
//  num++;
// }