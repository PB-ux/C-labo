#include <stdio.h>

int main(){
    int n = 987,count;
    count = 0;
    for(int i = 102; i<n;i++){
        if(i % 10 != i / 100 & i % 10 != i % 100 / 10 && i / 100 != i%100/10) 
            count += 1;
    }
    printf("%d",count);
    return 0;
}
