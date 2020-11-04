//Дано натуральное число n. Получить все его натуральные делители.

#include <stdio.h>

int main(){
    int n = 46,x;
    for(int i = 1; i < n; i++){
        if (n % i == 0) 
            printf("%d\n",i);
    }
    return 0;
}
