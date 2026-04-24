#include <stdio.h>
#include <stdbool.h> //this is for the boolean data types
//down we talk about data types only
int main(){

    int age = 25;
    int year= 2025;
    int quantity = 1;

    //int dont have the capability for storing decimal portions
    //
    //so we use float:

    float gpa = 2.5;
    float price = 19.99;
    
    //and for even more decimals

    double  pi = 3.14159265358979; //with doubles we can store from 15 to 16 digits after the decimal

    char grade = 'F'; //chars store a single character


    //in c there is no 'strings' 
    //
    //so we use a array of characters to represent a string:
    char jardin[] = "dans le jardin";

    bool isOnline = false;//bools are binary, they either true or false (true=1 false=0) 

    printf("you are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("you have ordered %d\n", quantity);

    printf("your gpa is %.1f\n", gpa); //the %.1f is to display a number of digits after (instead of the many zeros digits)
    printf("The price is %.2f\n", price);

    printf("the value of pi is %.15lf\n", pi);

    printf("Your grade is %c\n", grade);

    printf("Le chat %s\n", jardin);  //now were using %s instead of %c because were displaying a string


    printf("%d\n", isOnline); //this wil show 0 in the terminal or 1 even if we write (true or false) 

    if (isOnline) {
           printf("you are online");
    } else {
           printf("you are offline");
    }
    return 0;
}

//int = whole numbers (4 bytes)
//float = single precision decimal number (4 bytes)
//double = double precision decimal number (8 bytes)
//char = single characters (1 byte)
//char[] = array of characters (size varies)
//bool = true or false (1 byte, requires <stdbool.h>)
