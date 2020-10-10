#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g;
    int v1, v2;
    a = v1 < v2;
    printf("!(a>b)==(a<b)\n");
    b = a > 2 || a < 5;
    printf("!(a<2 || a>5)==(a>2||a<5)\n");
    e = (2*a != b+4);
    printf("!(2*a==b+4)==(2*a!=b+4)\n");
    f = (a>b | c<d);
    printf("!(a>b && c<d)==(a>b | c<d)\n");
    return 0;

}
