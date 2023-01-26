#include <stdio.h>

int main() {
    int blanks, tabs, newlines = 0;

    int c;

    printf("Begin entering characters, type ctrl-D to stop\n");
    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                ++blanks;
            case '\t':
                ++tabs;
                break;
            case '\n':
                ++newlines;
                break;
        } 
    }

    printf("blanks: %3d tabs: %3d newlines: %3d\n", blanks, tabs, newlines);

    return 0;
}
