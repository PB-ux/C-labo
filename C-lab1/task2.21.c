#include <stdio.h>

int main(){
    //Братков Павел 2.21
    int n,t,t2;
    n = 3600;
    t = n / 60; // minutes
    t2 = t / 60; // hours
    printf("%d:%d\n",t2,t);
    return 0;
}
