#include <stdio.h>

int main(){
    float x,x4,x3,x7,x10,x17,x21,x2,x13,x28,x12,x8,x5;
    x = 2.0;
    x2 = x * x;
    x3 = x2 * x;
    x4 = x3 * x;
    x7 = x4 * x3;
    x10 = x7 * x3;
    x21 = x10 * x7 * x4;
    printf("%f\n",x21);
    x2 = x * x;
    x3 = x2 * x;
    x5 = x3 * x2;
    x10 = x5 * x5;
    printf("%f\n",x10);
    x2 = x * x;
    x3 = x2 * x;
    x5 = x3 * x2;
    x10 = x5 * x5;
    x13 = x10 * x3;
    printf("%f\n",x13);
    x2 = x * x;
    x3 = x2 * x;
    x5 = x3 * x2;
    x7 = x5 * x2;
    x10 = x5 * x5;
    x17 = x10 * x7;
    printf("%f\n",x17);
    x2 = x * x;
    x3 = x2 * x;
    x4 = x2 * x2;
    x8 = x4 * x4;
    x12 = x8 * x4;
    x28 = x12 * x12 * x4;
    printf("%f\n",x28);
    return 0;
}
