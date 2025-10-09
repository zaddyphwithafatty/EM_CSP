// em 7th stiring notes
#include <stdio.h>
#include <strings.h>

int main(void){
    char name[] ="andrew";

    char last_name[25];
    printf("tell me your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name);

    printf("%c", last_name[0]);
    last_name[0] = 'r';

    printf("[%s]\n", full_name);
    strcat(full_name, " ");

    printf("[%s]\n", full_name);
    strcat(full_name, last_name);
    
    printf("your name is %s %s", name, last_name);
    printf("%zu", strlen(name));
    printf("%zu", strlen(name));


    return 0;
}



//What is the difference between a string and a character?
// a string is more charactors
//What types of quotation marks do we need for a string?
//double
//What library do we need to include to access the string functions in C?
//#inclue <string.h>
//List functions the library allows us to use.
// strcat %zu
//How do we concatenate strings in C?
// starcat()
//How do we get individual characters from a string in C?
//