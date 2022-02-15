#include <stdio.h>
#define MAX_CHAR 999

void checklength(void);

void checklength(void) {

    char char_array[MAX_CHAR];
    char single_char, beginning_char = '0';
    int line_size, index = 0;
    

   while (!feof(stdin)) {

        scanf("%c", &single_char);

        if (single_char == '\n'){

            beginning_char = (line_size > 80)? 'X' : ' '; 

            printf("%c %3d: ", beginning_char, line_size); 

            index = 0;  /* Resets index */
            for (; index < line_size; index++){
                printf("%c", char_array[index]);
            }
            printf("\n");
            line_size = 0;         /* Resets line character count */
        } else {
            char_array[line_size] = single_char;
            line_size++;
        }
    }
        
}

int main(void) {

    checklength();

    return 0;
}