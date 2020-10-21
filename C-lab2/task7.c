#include <stdio.h>

int main(){
    int a,b,c;
    a = 1;
    b = 5;
    c = 3;
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
        printf("Есть четное число\n");
    else 
        printf("Нет честного числа\n");
    return 0;
}
