 #include <stdio.h>
 #include <math.h>
 int main(){
     float n = 5.0, sum1 = 0, sum2 = 0, sum3 = 0, p1 = 1.0, p2 = 1.0, p3 = 1.0;
     float x = 0.5;
     for(int i = 1; i <= n; i++){
           p1 *= sin(x);
           sum1 += p1;
       }  
     for(int i =1; i <= n; i++){
            p2 *= x;
            sum2 += sin(p2);
       }
     for(int i = 1; i <= n; i++){
        p3 = sin(x);
        sum3 += sin(p3)
     }
     return 0;
   }         
