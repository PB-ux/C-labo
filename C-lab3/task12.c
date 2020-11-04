//Дано целое число m > 1.Получить наибольшее целое k, при котором 4k < m.

#include <stdio.h>

int main(){
    int m = 78,k = 0, num 1;
    while (4*num<m){
        num *= 4;
        k += 1; 
    }
    printf("%d\n",k);
    return 0;
}
