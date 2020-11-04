// Подсчитать количество цифр в десятичной записи целого неотрицательного числа n
#include <stdio.h>

int main(){
   int n,x,count = 0;
   n = 23454;
   x = n;
   while (n > 0){
        x = n % 10;
        n = n / 10;
        count += 1; 
   }
    printf("%d\n",count);
    return 0;
}
