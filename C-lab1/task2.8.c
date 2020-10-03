#include <stdio.h>

int main(){
    int i,j,k,m,n;
    char c, d;
    i = 1; j = 2; k = -7; m = 0; c = 'w', n = 2;
    d = 'a' + 1 < c;
    printf("Bool = %d - True\n",d);
    m = c != 87;
    printf("Bool = %d - True\n", m);
    m = !c + 87;
    printf("Int = %d\n",m);
    i += ++ j + 3;
    printf("Int = %d\n",i);
    m = -i - 5 *j >= k + 1;
    printf("Bool = %d - False\n",m);
    m = c = !87;
    printf("Bool = %d - False\n",m);
    printf("Bool = %d - False\n", !m == c +87);
    j = 2;
    k *= 3 + j;
    printf("Int = %d\n", k);
    k %= m = 1 + n / 2;
    printf("Int = %d\n", k);
    printf("Bool = %d - False\n", c + i < c - 'x' + 10);
    printf("Bool = %d - False\n", i + j++ +k == -2*j);
    printf("Int = %d\n",1+3*(n += 7)/5);
}
