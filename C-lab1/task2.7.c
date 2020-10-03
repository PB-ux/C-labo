#include <stdio.h>

int main(){
    int a,b,c;
    a =2; b = 6; c = 3;
    printf("%d\n", b-- -a);//Верно результат будет 4, b = 5 
    printf("%d\n",a += a++);// a += ++a (a+a=2a=4), или постфиксная операция инкрементирования сработает после присваивание, следовательно a = 5 
    b = 6; a = 2;
    printf("%d\n",++b/a++*--c);
    a = 2; b = 6;
    printf("%d\n", -a-- -b);
    a = 2;
    printf("%d\n", a = a++);
    b = 6; a = 2; c = 3;
    printf("%d\n", b++/++a*c);
    a = 2;
    printf("%d\n", a- --c);    
    
}
