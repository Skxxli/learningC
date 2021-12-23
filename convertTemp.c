#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>

// float toFahren(float celsius);
// float toCelsuis(float fahren);


float toFahren(float celsius){

    float fahren = (celsius *9)/5 + 32;
    return fahren;
}

float toCelsuis(float fahren){

    float celsuis = ((fahren - 32) * 5)/9;
    return celsuis;
}

// Functions should be implemented before main() to prevent "implicit declaration error"
// Functions can also be declared in the header to prevent error, as above...

int main(){

    printf("%04f\n", toCelsuis(0.0));
    printf("%4f\n", toCelsuis(20.0));
    printf("%04f\n", toFahren(104.0));
    printf("%04f\n", toFahren(60.0));

}