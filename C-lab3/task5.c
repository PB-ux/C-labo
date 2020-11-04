//Определить, верно ли, что куб суммы цифр натурального числа n равен n2.
#include <stdio.h>

int main(){
    int n,x,sum = 0;
    n = 234;
    x = n;
    while (n > 0){
        x = n % 10;
        n = n / 10;
        sum += x;
    }
    if (sum == n*n)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
