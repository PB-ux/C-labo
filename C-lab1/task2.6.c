#include <stdio.h> 

int main(){
    /*
     Братков Павел 
     E1 op= E2 эквивалентны E1 = E1 op E2
     E1 op= E2 эквивалентны E1 = E1 op (E2)
     */
    int a,c;
    a = 1;
    c = 1;
    a += c;
    printf("%d",a);
    a = a + (c);
    printf("%d",a);
}
