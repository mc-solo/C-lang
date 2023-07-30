#include <stdio.h>

int main (void)
{   
    // int types
    int position = 10;  // var declaration
    int x, y, z;

    x = 6;
    y = 7;
    z = 8;

    printf("Values of x y and z respectively: %d %d %d \n", x, y, z);

    // float and double
    float mynum = 123.13;
    double mydouble = 123.134689;

    printf("mynum: %f\n", mynum);
    printf("mydouble: %lf\n", mydouble);

    char mychar = 113; //equivalent to q b

    printf("mychar:%c\n", mychar);

    return (0);
}