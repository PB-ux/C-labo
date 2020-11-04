#include <stdio.h>

int main(){
    int n,i, f0 = 1, f1 = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
       if (f0 >= f1){
            printf("%d",f1);
            f1 = f0 + f1;
       }
       else {
            printf("%d",f0);
            f0 = f1 + f0;
       }
     }
    return 0;
}
