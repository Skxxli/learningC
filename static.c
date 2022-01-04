#include <stdio.h>

void compute_automatic(int x);
void compute_static(int x);

void compute_automatic(int x){
    int value = 100;
    printf("{automatic} x: %d, value: %d, sum: %d \n", x, value, value + x);
    ++value;
}

void compute_static(int x){
    static int value = 100;
    printf("{static} x: %d, value: %d, sum: %d \n", x, value, value + x);
    ++value;
}

int main(){
    compute_automatic(1);
    compute_automatic(1);

    compute_static(1);
    compute_static(1);

    return 0;
}