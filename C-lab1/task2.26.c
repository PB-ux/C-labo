#include <stdio.h>

int main(){
    //Братков Павел 2.26
    char a, b, c, d;
    int x;
    scanf("%d", &x);
    d = x;
    c = x >> 8;
    b = x >> 16;
    a = x >> 24;
    printf("%c%c%c%c",a,b,c,d);
    return 0;
}
