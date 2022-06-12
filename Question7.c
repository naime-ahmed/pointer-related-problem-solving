#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int returnByAddress(int *num1, int *num2){

    *num1 = 10;
    *num2 = 20;
    return 0;
}

int main(){

    int num1, num2;

    returnByAddress(&num1, &num2);

    printf( "%d %d", num1, num2 );

    return 0;
}
