 #include <stdio.h>
   
 int main(){
     int k;
    k = 11;
    if ( k  == 11)
         printf("%d рублей\n",k);
    else if (k % 10 == 1)
         printf("%d рубль\n",k);
    else
        printf("%d рублей\n",k);
    return 0;
   }  
