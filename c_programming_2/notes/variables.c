// Em 7th variables notes 

#include <stdio.h>

int main(void){
    int grade = 95; // 4 bytes
    float pi = 3.14; //4 bytes
    double long_pi = .1415926358; // 8 bytes
    char letter_grade = 'A'; // 1 byte
    char name[] = "enzo";
    // user input 
    printf("what is your grade percentage as a whole number: ");
    scanf("%d", &grade);


    printf("what is your letter grade: ");
    scanf(" %c", &letter_grade);

    printf("I did i!");
    printf("%s did it!\n", name);
    printf(" you have a %d, in the class. that is an %c", grade, letter_grade);
    
    return 0;
}


//What is the main difference between declaring variables in Python and C?
//python is a dnamicly lanuage A.K.A all variables take same amount of sace
//c is the opposite and takes and leasts spac as possible  

//In C, what is the purpose of specifying a data type when declaring a variable?
// the bte sizes will change

//List three common data types used in C and their corresponding format specifiers for printf().
// int, float, double, char 

//How do you declare and initialize an integer variable named "age" with the value 25 in C?

//What is the difference between printf() and scanf() functions in C?
// printf() does what its told to do in the code
// scanf() looks or two eaces o information

//How do you add comments in C?
// you use the double slash or // command 

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
// you tell C that you want to do what is inside of it
// it tells the code that i also want to run whats under it

//In C, what is the significance of the main() function?
//main is a function and every line of code in C must be in a function

//What is the difference between %d and %f format specifiers in printf()?

//How do you print a newline character in C?
// \n
//What is the purpose of the & symbol when using scanf() to get user input?
//it tells i that its going to replace what is alread there with what is in the &symbol

//How do you declare a constant in C? Provide an example.
//you rite const before the other code
//example: const float pi = 3.14