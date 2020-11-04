#include <stdio.h>

int main(){
    int n = 4;
    for(int i = 1; i < n; i++){
        if((n % (i*i) == 0) && (n % (i*i*i) != 0)){
            printf("%d\n",i);
        }
    }
    return 0;

}
