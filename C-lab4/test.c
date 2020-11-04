#include <stdio.h>
#define MAXLINE 1000
int main(){
    int in;
    char s[MAXLINE];
    for(int i = 0; s[i] != 'T';++i){
            s[i] = getchar();
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 'a' - 'A';
    }
    return 0;

}
