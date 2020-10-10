#include <stdio.h>

int main(){
    //Братков Павел 2.14
    double d; float f; long lng; int i; short s;
    s = i = lng = f = d = 100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    d = f = lng = i = s =100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    s = i = lng = f = d = 1000000/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    d = f = lng = i = s =1000000/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    lng = s = f = i = d =100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    f = s = d = lng = i = (double)100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    s = i = lng = f = d = 100/(double)3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    f = s = d = lng = i = (double)100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    i = s = lng = d = f = (double)(100/3);
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    /* 
    s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000
    s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000
    s = 5653 i = 333333 lng = 333333 f = 333333.000000 d = 333333.000000
    s = 5653 i = 5653 lng = 5653 f = 5653.000000 d = 5653.000000
    s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000
    s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000
    s = 33 i = 33 lng = 33 f = 33.333332 d = 33.333333
    s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000
    s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000   
    */
    return 0;
}
