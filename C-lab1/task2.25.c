#include <stdio.h>

int main(){
    char a,b,c,d;
    unsigned int pack;
    pack = ((a<<8|b)<<8|c)<<8|d;
    printf("%d\n",pack);
    return 0;
}
