#include <stdio.h>

int main(){
    int x,y;
    x = 1;
    y = 2;
    if (x > 0 && y > 0) 
        printf("Первый квандрант");
    else if (x < 0 && y > 0)
        printf("Второй квандрант");
    else if (x < 0 && y < 0)    
        printf("Третий квандрант");
    else 
        printf("Четвертый квандрант");
    return 0;
}
