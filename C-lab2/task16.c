#include <stdio.h>

int main(){
    int v,count_fish,k;
    v = 15; 
    count_fish = 50;
    if (v > count_fish*3){
        k = (v/3)-count_fish;
        printf("Неперенаселенный, можно еще добавить: %d\n",k);
    }
    else 
        k = count_fish - (v/3);
        printf("Перенаселенный переместить в другой аквариум: %d\n",k);
    
    return 0;
}
