#include <stdio.h>

int g_years = 10; /* how to init global variables*/

void  process() {

    /* printf("g_salary in process() %f\n", g_salary); */
    g_years++;
}

double g_salary = 3000.00;

int main(){
    printf("g_years before process() call: %d\n", g_years);
    process();
    printf("g_years after process() call: %d\n", g_years);
    printf("g_salalary in main() %f\n", g_salary);
    return 0;

}