#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, n;
    scanf("%d%d", &x, &n);
    x <<= n;
    printf("x = %d", x);
    return 0;
}
