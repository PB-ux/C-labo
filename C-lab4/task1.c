#include <stdio.h>
#include <string.h>
#define N 100 
char regist(char *);

int main(){
   char input;
   char str[N];
   int i = 0;

   while((input = getchar()) != EOF && i < N-1){
        if(input >= 'A' && input <= 'Z')
            printf("Прописные буквы будут не учитываться\n");
        else{
            str[i] = input;
            i++;
        } 
   }
    str[i] = '\0';
    printf("%s\n",str);

    regist(str);
    printf("%s\n",str);
    return 0;
}

char regist(char s[]){
    int i = 0;
    while(i<strlen(s)){
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] + 'A' - 'a';
        i++;
    }

}
