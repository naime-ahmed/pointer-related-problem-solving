#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int a = 10;
    int b = 20;
    int *p = &a;

    printf( "%d %d %d\n", a, b, *p  );

    *p = 30;
    printf( "%d %d %d\n", a, b, *p );

    *p = 20;
    a = 50;
    b = 10;
    printf( "%d %d %d\n", a, b, *p );

    p = &b;
    printf( "%d %d %d\n", a, b, *p);

    a = 20;
    b = 100;
    printf( "%d %d %d\n", a, b, *p );

    return 0;
}
// Output of the above code is 
// 10 20 10
// 30 20 30
// 50 10 50
// 50 10 10
// 20 100 100