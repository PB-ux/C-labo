#include <stdio.h>

int main(){
    int c;
    c = '6';
    switch(c) {
        case '1': printf("Увы - рабочий день");
                  break;
        case '2': printf("Увы - рабочий день");
                  break;
        case '3': printf("Увы - рабочий день");
                  break;
        case '4': printf("Увы - рабочий день");
                  break;
        case '5': printf("Увы - рабочий день");
                  break;
        case '6': printf("Ура! Суббота");
                  break;
        case '7': printf("Ура! Воскресенье");
                  break;
        default:
            printf("Неверный ввод");
            break;
    }
    return 0;
}
