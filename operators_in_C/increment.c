#include <stdio.h>

int main() {
    int a = 5;

    printf("Pre-increment (++a): %d\n", ++a);            // ++a means increment first then print
    printf("Current value of a: %d\n", a);

    printf("Post-increment (a++): %d\n", a++);          // a++ means print a first then increment
    printf("Current value of a: %d\n", a);

    return 0;
}
