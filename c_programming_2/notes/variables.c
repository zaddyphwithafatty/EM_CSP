// Em 7th variables notes 

#include <stdio.h>

int main(void){
    int grade = 95; // 4 bytes
    float pi = 3.14; //4 bytes
    double long_pi = .1415926358; // 8 bytes
    char letter_grade = 'A'; // 1 byte
    char name[] = "enzo";

    printf("I did i!");
    printf("%s did it!", name);
    printf(" you have a %d, in the class. that is an %c", grade, letter_grade)
    
    return 0;
}


//What is the main difference between declaring variables in Python and C?
//python is a dnamicly lanuage A.K.A all variables take same amount of sace
//c is the opposite and takes and leasts spac as possible  

//In C, what is the purpose of specifying a data type when declaring a variable?
// the byte sizes will change

//List three common data types used in C and their corresponding format specifiers for printf().
// int, float, double, char 
//How do you declare and initialize an integer variable named "age" with the value 25 in C?

//What is the difference between printf() and scanf() functions in C?

//Write a C program that asks the user for their name and age, then prints a greeting message with their information.

//How do you add comments in C? What are the two types of comments?

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?

//In C, what is the significance of the main() function?

//Write a C program that calculates the area of a rectangle. Ask the user to input the length and width, then display the result.

//What is the difference between %d and %f format specifiers in printf()?

//How do you print a newline character in C?

//Write a C program that converts temperature from Celsius to Fahrenheit. Ask the user for input in Celsius and display the result in Fahrenheit.

//What is the purpose of the & symbol when using scanf() to get user input?

//How do you declare a constant in C? Provide an example.