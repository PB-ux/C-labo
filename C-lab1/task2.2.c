#include <stdio.h>

int main(){
    //Братков Павел 2.2
    float a = 1.71;
    printf("a = %f - float\n",a);
    float b = 5.E+2;
    printf("b = %f - float\n",b);
    float c = 0X1E6;
    printf("c = %f = %X = %a - float\n",c,c,c);
    float d = 1e-2f;
    printf("d = %f = %e - float\n",d,d);
    float e = 1E-6;
    printf("e = %f = %e - float\n",e,e);
    float f = 0e0;
    printf("f = %f = %e - float\n",f,f);
    float g = -12.3E-6;
    printf("g = %f = %e - float\n",g,g);
    float h = 0.313159E1F;
    printf("h = %f = %e -float \n",h,h);
    float i = 1.0E-10D;
    printf("i = %f = %e - Double  float\n",i,i);
    float j = 1234.56789L;
    printf("j = %f - Long float\n",j);
    float k = +10e6;
    printf("k = %f = %e - float\n",k,k);
    int l = 123456L;
    printf("l = %d - int\n",l);
    float o = 0051E-04;
    printf("o = %f = %e - float\n",o,o);
    float m = 05.5;
    printf("m = %f - float\n",m);
    float n = .005;
    printf("n = %f - float\n",n);
    return 0;

}
