#include <stdio.h>

int main(){
    float a = 5.345, n = 1.0, sum = 0;
    while (sum < a){
        sum += 1/n;
        n += 1.0;
    }
    printf("%f\n",n);
    return 0;
}
