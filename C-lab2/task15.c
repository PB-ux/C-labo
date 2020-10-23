#include <stdio.h>

int main(){
    int m,n,recorder;
    m = 10;
    n = 30;
    recorder = (m*60+n) * 16;
    printf("%d\n",recorder);
    if (recorder < 6*1024)
        printf("Вмешаеться\n");
    else 
        printf("Не вмешаеться\n");
    return 0;
}
