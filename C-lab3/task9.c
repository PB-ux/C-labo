//Дано натуральное число n. Найти значение числа, полученного следующим образом: из записи числа n выбросить цифры 0 и 5, оставив прежним порядок остальных цифр.
#include <stdio.h>

int main(){
    int n = 465, i = 1, s = 0,a;
    while (n != 0){
        a = n % 10;
        if (a != 5){
            s += a*i;
            i *= 10;
        }
        n /= 10;
            
    }
    printf("%d\n",s);
    return 0;

}
