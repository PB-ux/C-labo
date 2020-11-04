#include <stdio.h>
#include <string.h>
#define N 100
char add3(char *);

int main(){
    char input;
    char ch[N];
    int i = 0;
    while((input = getchar()) != EOF && i < N){
        if(input >= '0' && input <= '5'){
            ch[i] = input;
            i++;
        }
    }
    add3(ch);
    printf("%s\n",ch);
    return 0;
}

char add3(char s[]){
    int i = 0;
    while(i<strlen(s)){
        s[i] = s[i] + 3;
        i++;
    }
}
