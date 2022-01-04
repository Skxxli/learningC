#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>

int main(){

    int limit, done, start = 0; 
    /* Reading a positive value*/
    do {
        printf("Enter limit to print even/odd values: ");
        scanf("%d", &limit);
        done = limit > 0;
        if (!done){
            printf("Invalid value %i provided (Must be > 0)\n", limit);
        }
    } while(!done) ;

    char even[] = "Even values: ";
    char odd[] = "Odd values: ";

    for (start; start < limit; start++){
        if (start % 2 == 0){
            strcat(even, ("%d ", start));
        } else {
            strcat(odd, ("%d ", start));
        }
    }

    /* printf(even + ("%c", '\n') + odd + ("%c", '\n')); */
/*     printf("%s%c%s%c" , even, '\n', odd, '\n');*/




}