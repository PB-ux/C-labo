#include <stdio.h>

int main(){
    //Братков Павел 2.1 
    int a = 123;
    printf("a = %d - int\n", a);
    char  b = '0';
    printf("b = %d - char\n", b);
    int c = 00123;
    printf("c = %d = %o - int\n",c,c);
    int d = 0xffffffL;
    printf("d = %d = %X - int long\n",d,d);
    int e = 0731UL;
    printf("e = %d = %o - unsigned long int\n",e,e);
    int f = 123456789LU;
    printf("f = %d - long unsigned int\n",f);
    char g = '\x7';
    printf("g = %d - char\n",g);
    char h = '\n';
    printf("h = %d - char\n",h);
    int i = -5; 
    printf("i = %d - int\n",i);
    char j = -'x';
    printf("j = %d - char\n",j);
    int k = +0xaf;
    printf("k = %d = %X - int\n",k,k);
    int l = 0XFUL;
    printf("l = %d = %X - unsigned long int\n",l,l);
    char m = '\122';
    printf("m = %d - char\n",m);
    int n  = 0X0;
    printf("n = %d = %X - int\n",n,n);
    return 0;
    
}
