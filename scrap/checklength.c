#include <stdio.h>

void checklength(void);

void checklength(void) {

    char char_array[999];
    char single_char, beginning_char = '0';
    int line_size, index = 0;
    

    while (!(feof(stdin))) {

        scanf("%c", &single_char);

        char_array[line_size] = single_char;
        line_size++;
    }
    
    beginning_char = (line_size > 80)?  'X' : ' ';

    printf("%c %3d:", beginning_char, line_size);

    for (index; index < line_size; index++) {
        printf("%c", char_array[index]);
    }
}

int main(void) {

checklength();

}