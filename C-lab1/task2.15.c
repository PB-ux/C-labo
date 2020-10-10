#include <stdio.h>

int main(){
    //Братков Павел 2.15
    double d = 3.2, x; int i = 2, y;
    x = ( y = d / i ) * 2;
    printf ("x = %f ;y = %d\n", x, y);
    x = ( y = d / i ) * 2;
    printf ("x = %d ;y = %f\n", x, y);
    y = ( x = d / i ) * 2;
    printf ("x = %f ;y = %d\n", x, y);
    y = d * ( x = 2.5 / d);
    printf ("x = %f; y = %d\n", x, y);
    x = d * ( y = ( (int)2.9 + 1.1) / d);
    printf ("x = %d y = %f\n", x, y);
    return 0;
    /* x = 2.000000 ;y = 1
    x = 1 ;y = 2.000000
    x = 1.600000 ;y = 3
    x = 0.781250; y = 2 
    x = 0 y = 0.00000
    */
    
}
