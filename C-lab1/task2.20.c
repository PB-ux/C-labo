#include <stdio.h>

int main(){
    //Братков Павел 2.20
    int k,x;
    k = 234;
    x = k % 10 * 100 + k % 100 / 10 * 10 + k / 100;
    printf("%d\n",x);
    return 0;
    
}
