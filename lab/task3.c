#include <stdio.h> 

int main(){
    int a, c;
    c = 5; 
    //2.5a Братков Павел ВПИ22
    --c; 
    a = c/2;
    printf("%d True\n",a);
    //2.5b
    c = 5;
    a = --c/2;
    printf("%d True\n",a);
    //2.5c
    c = 5;
    c -= 1;
    a = c % 2;
    printf("%d False\n", a);
    //2.5d
    c = 5; 
    a = c--/2;
    printf("%d False\n", a);
    //2.5e
    c = 5;
    a = c -= 1/2;
    printf("%d False\n", a);
    //2.5f
    c = 5;
    a = (c = c -1)/2;
    printf("%d True\n", a);
    //2.5g
    c = 5;
    a = (c -=1)/2;
    printf("%d True\n", a);
    //2.5h
    c = 5; 
    a = (c-=1)/2.0;
    printf("%d True\n",a);
}
