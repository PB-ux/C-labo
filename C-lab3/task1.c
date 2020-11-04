#include <stdio.h>

int main(){
    int n = 999,count, count2;
    count = 0;
    for(int i = 111; i <= n; i++){
        if (i % 10 == i / 100 || i / 100 == i % 100 / 10 || i % 10 == i % 100 / 10)
            count += 1;
    }
    printf("%d",count);
    return 0;
}
