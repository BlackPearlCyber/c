#include <stdio.h>
#include <stdbool.h> // for using boolean data type

int main () {
    int num = 25;
    char a = 'm';
    float b = 2.00;
    bool c = true;
    double e = 2.456789;

    /* Printing the values of variables (data types) */
    printf("Integer : %d\n", num);
    printf("Character : %c\n", a);
    printf("Boolean value : %d\n", c);   // prints 1 for true, 0 for false
    printf("Floating value : %f\n", b);
    printf("Double : %lf\n", e);
    printf("Boolean value : %s\n", c ? "true" : "false");

    return 0;
}
