#include <stdio.h>

int main(){
    int x,a,b,c;
    x = 123;
    if (x / 100 == x % 100 / 10)
        printf("Есть одинаковые числа\n");
    else if (x % 100 / 10 == x % 10)
        printf("Есть одинаковые числа\n");
    else if (x / 100 == x % 10)
        printf("Есть одинаковые числа\n");
    else 
        printf("Нет одинаковых чисел\n");
    return 0;
}
