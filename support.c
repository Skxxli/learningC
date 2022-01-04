#include <stdio.h>

static void helper(); /* using a static identifier makes the function private to the file*/
void process();
int g_computers = 200;

void print_sum(int limit){
    helper();
    int sum = 0, k = 1;
    while (k <= limit){
        sum += k;
        k++;
    }
    printf("The sum of %d is %d\n", limit, sum);
}
void process(){
    g_computers++;
}


static void helper(){
    printf("I'm the helper! I don't actually help though\n");
}