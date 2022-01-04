#include <stdio.h>

extern void print_sum(int x);
void process();

extern int g_computers;


int main(){
    print_sum(4);

    printf("-----------------------------------------\n");

    printf("Before calling process %d \n", g_computers);
    process();
    printf("After calling process %d \n", g_computers);


    return 0;

}