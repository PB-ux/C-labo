#include <stdio.h>

int main(){
    //Братков Павел 2.18
    int k,x;
    x = 321;
    k = x % 10 + x / 100 + x % 100 / 10;
    printf("%d\n",k);
    return 0;
}
