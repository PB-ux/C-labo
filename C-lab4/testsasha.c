#include <stdio.h>

int main(){
    short s = 10;
    int a = 11;
    float f = 3.0;
    float d;
    float i = 0;
    d = s + a*f;
    printf("%f\n",d);
    while(i<d){
        i += 5.0;
        printf("%f\n",i);
    }
    return 0;

}
