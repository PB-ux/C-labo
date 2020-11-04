#include <stdio.h>

int main(){
    int n=5,sum=1,p=1;
    for(int i = 2; i <= n; i++){
        p *= i;
        sum += p;    
    }
    printf("%d\n",sum);
    return 0;
}
