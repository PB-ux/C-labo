#include <stdio.h>

int main(){
    int n = 46, sum = 0;
    for(int i = 1; i <= n; i++){
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("Число совершенное: %d\n",n);
    return 0;
}
