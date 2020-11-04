#include <stdio.h>

int main(){
    int n = 999, count = 0;
    for(int i = 11; i <= n;i++){
        if((i % 10 == i / 10) || (i % 10 == i / 100) || (i % 10 == i / 100 && i % 10 == i % 100 / 10 && i / 100 == i % 100 / 10)) {
            count += 1;
            printf("%d\n",i);
        }
    }
    printf("Count = %d\n",count);
    return 0;
}
