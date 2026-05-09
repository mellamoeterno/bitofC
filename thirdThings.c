#include <stdio.h>
#include <stdbool.h>

//format specifier = special tokens that begin with % symbol
//followed by a character that specifies the data type
//and optional modifiers (width, precision, flags)
//they control how data is displayed or interpreted.



int main () {
    //ex width:
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    int num4 = -100;
    int num5 = +100;
 

    printf("%3d\n", num1); //this number along with d (%3d) is the width amount of of space that will
    printf("%3d\n", num2); //display in the terminal (taking in count te size of also the int number)
    printf("%3d\n", num3);


    //while in here it'll add width (space) to the front of the numbers
    printf("%-3d\n", num1); 
    printf("%-4d\n", num2);
    printf("%-5d\n", num3);

    //and here it'll replace te spaces with 0's
    printf("%03d\n", num1); 
    printf("%04d\n", num2);
    printf("%05d\n", num3);

    //in here if we put positive after % it'll display if its positive or negative
    printf("%+d\n", num4);
    printf("%+d\n", num5);

    
    
    

    


    //ex precision:


        //by default when displaying a float number it'll show 6 decimal digits
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%7.2f\n", price1); //see more of this %7.2f later
    printf("%7.2f\n", price2);
    printf("%7.2f\n", price3);

    return 0;
} 
