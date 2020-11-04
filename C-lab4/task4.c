#include <stdio.h>
#include <string.h>
#define N 1000
char symbol_a(char *);
char symbol_befor_e(char *);
char sosed_no(char *);
char plus_minus(char *);
char C_pp(char *);
char ch(char *);
int main(){
    char in;
    char str[N];
    int i = 0;
    while((in = getchar()) != EOF && i < N-1 && in != '.'){
        str[i] = in;
        i++;
    }
    str[i] = '\0';
    printf("Исходная строка: %s\n",str);

    printf("Количество 'a': %d\n",symbol_a(str));
    printf("Количество 'e' перед 'u': %d\n",symbol_befor_e(str));
    printf("Количество пар 'n' и 'o': %d\n",sosed_no(str));
   // printf("%d\n",plus_minus(str));
    printf("Количество группы символов 'C++': %d\n",C_pp(str));
    ch(str);
    return 0;

}

char symbol_a(char s[]){
    int i = 0,count = 0;
    while(i<strlen(s)){
        if (s[i] == 'a')
            count += 1;
        i++;
    }
    return count;
}

char symbol_befor_e(char s[]){
    int i = 0, count = 0;
    while(i<strlen(s) && s[i] != 'u'){
        if(s[i] == 'e')
             count += 1;
        i++;
    }
    return count;
}

char sosed_no(char s[])
{
    int i = 0, count = 0;
    while(i<strlen(s)){
        if((s[i] == 'o' && s[i+1] == 'n') || (s[i] == 'n' && s[i+1] == 'o')) 
            count += 1;
        i++;
    }
    return count;
}

char plus_minus(char s[]){
    int i = 0, count_plus = 0, count_minus = 0;
    while(i<strlen(s)){
        if ((s[i] == '+' && s[i+1] == '-') || (s[i] == '-' && s[i+1] == '+'))
           printf("Символы '+' и '-' чередуются\n");

        if (s[i] == '+')
            count_plus += 1;

        if (s[i] == '-')
            count_minus += 1;

        i++;
    }
    return count_plus,count_minus;

}

char C_pp(char s[])
{
    int i = 0, count = 0;
    while(i<strlen(s)){
        if(s[i] == 'C' && s[i+1] == '+' & s[i+2] == '+') 
            count += 1;
        i++; 
    }
    return count;
}

char ch(char s[]){
     int i = 3,flag;
     while(i<strlen(s)){
         if (s[i-3] == 'c' && s[i-2] == 'h' && s[i-1] == 'a' && s[i] == 'r')
             flag = 1;
         i++;
     }
     if (flag == 1)
         printf("Слово char есть");
     else 
         printf("Слово char нет");
 }

char len_abc(char s[]){
    int k = 0;
    char c = 'a';
    char len[26];
    for (int i = 0; i<26;i++)
        len[i] = 0;
    while(k<strlen(s)){
        if(s[k] == c) 
            len[k] = c;
            c++;
        k++;
    }

}
