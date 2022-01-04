#include <stdio.h>
#include <stdlib.h>
#include <iso646.h> // will allow use of [and, or, not]

int main(){

    printf("Hello, World!\n");
    
    char ch = 'G';
    printf( "%c\n", ch);
    printf("-------------------------------------------\n");

    ch = 0x47;
    printf( "%c\n", ch);
    printf("-------------------------------------------\n");


    printf("char: %i\n", sizeof(char));
    printf("int: %i\n", sizeof(int));
    printf("short int: %i\n", sizeof(short int));
    printf("long int: %i\n", sizeof(long int));
    printf("long long int: %i\n", sizeof(long long int));
    printf("-------------------------------------------\n");

    int ch1, ch2;
    ch1 = (ch2 = 43) + 3;

    ch1 = ch2 = 0x00;

    int x, y, iteration;

    x = 2;
    y = 3;
    

    while(x = y){ // This will be always true b/c any nonzero value is considered true in C.
        iteration++;
        printf("BAD!\n");{
            break;  
        }
    }


    printf("%i\n", 5 && 3); // Evaluates as true
    printf("%i\n", 5 and 3); // Evaluates as true
    printf("%i\n", 5 or 3); // Evaluates as true
    printf("%i\n", not 5);// Evaluates as false
    printf("-------------------------------------------\n");

    x = 7;
    while( x != 10122){
        printf("%i\n", x);
        x *= 2;
        x %= 65635;
    }

    do{
        printf("%i\n", x);
        x -= 10000;
    } while (x > 0);

    printf("%i\n", x);
    printf("-------------------------------------------\n");

    int j = 0;

    for( x= 7; j < 16 ; x = (2 * x)% 65535){
        printf("%i %i\n", x , j);
            j++;
    }
    printf("-------------------------------------------\n");


    printf("%10i %5i\n", x , j); //  7  16
    printf("%010i %05i\n", x , j); // 000007  16
    printf("%10f %05.2f\n", 5.0 , 1.1); 
    printf("-------------------------------------------\n");


    /*
     %i is for signed decimal integers
     %d is the same as %i (for legacy reasons)
     %u is for unsigned integers
     %c is for ASCII characters
     %x for unsigned hexadecimal integers (using lower case for a - f)
     %X for unsigned hexadecimal integers (using capitals case for A - F)
     %o for unsigned octal integers
     %% for printing the % sign

     With the exception of %c, you can insert an l (ell) or an h between the % sign and the letter to specify long or 
     short, respectively. You may also put an # between the % sign and the x (or X) to print 0x or 0X in front of your 
     hex numbers. Doing the same thing for %o puts a zero in front of your octal numbers.

     extras: 
     %6i || %6d - print as integer, at least 6 characters wide
     %06i - print as integer, at least 6 characters wide, padded with zeros
     %6f - print as floating point, at least 6 charcters wide
     %06.2f - print as floating point, at least 6 characters wide, 2 characters after the decimal, padded with zeros
    */

    printf("%03li %hi\n", 5 , 9); 
    printf("%x %X\n", 5 , 9); 
    printf("%#x %#X\n", 5 , 9); 
    printf("-------------------------------------------\n");

    printf("Printing all (printable) ASCII characters\n");

    int decimalRepresentation = 32;

    do{
        printf("%i\t%x\t%c  ||\t", decimalRepresentation, decimalRepresentation, decimalRepresentation);
        decimalRepresentation++;
        if (decimalRepresentation % 4 == 0){
            printf("\n");
        }
    } while (decimalRepresentation < 127);
    printf("\n-------------------------------------------\n");


    int currChar = getchar();
    
    while (currChar != EOF){
        putchar(currChar);
        currChar = getchar();
    }

    // (currChar != EOF)? putchar(currChar) : 0;





    exit(0);



}