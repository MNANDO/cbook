#include <stdio.h>

#define IN 1    /* inside word */
#define OUT 0   /* outside word */

int main() {
    int c, nl, nw, nc, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            putchar(c);
            state = IN; 
        }
        else if (state) {
            putchar('\n'); 
            state = OUT;
        }
    }

    return 0; 
}
