#include <stdio.h>
#define N 100
int main(){
   char ch;
   char nums[N];
   int i;

   i = 0;
   while((ch = getchar()) != EOF && i < N-1){
        if (ch >= 48 && ch <= 57){
            nums[i] = ch+3;
            i++;
        }
   }
   nums[i] = '\0';
   printf("%s",nums);
   return 0;

}
