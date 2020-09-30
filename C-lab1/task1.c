#include <stdio.h> 

int main(){
    //Выполнил Братков Павел ВПИ22
    int a, b, c, d, e;
    a = 2; b = 13; c = 7; d =19; e = -4;
    printf("%d True\n",b/a/c);//True 2.3a
    printf("%d True\n", b % e);//True 2.3b
    printf("%d True\n", 7-d%+(3-a));
    printf("%d True\n",c%d-e);//True 2.3e
    printf("%d True\n", -e % a + b / a * -5 + 5);//True 

}
