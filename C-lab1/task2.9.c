#include <stdio.h>

int main(){
    int  x, True;
    x = 1, True = 1;
    printf("not(not x) == !(!x) = x - %d \n",!(!x));// В си операция ! означает 'не', соответсвенно !(!x) == not(not x)
    printf("x and true == x && true = x - %d \n", x && True);//В си операция && означает 'and', соответственно x and true == x && true = x 
}
