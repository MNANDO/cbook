#include <stdio.h>

// defined constants NOTICE THESE DO NOT REQUIRE SEMI-COLONS
#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP 30     /* step size */
/* print Fahrenheit-Celsius table */
int main() {
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32)); 
    }
}
