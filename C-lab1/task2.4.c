#include <stdio.h>

int main(){
    //Выполнил Братков Павел ВПИ22
    //2.4a
    int a, c;
    c = 1; 
    c++;
    a = 2 * c;
    printf("%d True\n", a);//True 
    //False 2.4b
    c = 1;
    a = 2 * c++;
    printf("%d False\n",a);
    //True 2.4c
    c = 1;
    c += 1;
    a = c + c;
    printf("%d True\n",a);
    //False 2.4d
    c = 1;
    a = c++ + c;
    printf("%d False\n",a);
    //True 2.4e
    c = 1;
    ++c;
    a = c + c;
    printf("%d True\n",a);
    //True 2.4f
    c = 1;
    a = ++ c + c;
    printf("%d True\n",a);
    //False 2.4j
    c = 1;
    a = c += 1 + c;
    printf("%d False\n",a);
    //True 2.4h
    c = 1;
    a = (c+=1)+c;
    printf("%d True\n",a);
    c = 5; 
    c = c - 1/2;
    printf("%f",c);
}
