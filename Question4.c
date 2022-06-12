#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

void makeSum(int a, int b, int* sum){

    *sum = a + b;
}
int main(){

    int num1, num2;
    int sum;

    scanf( "%d %d", &num1, &num2 );

    makeSum(num1, num2, &sum);

    printf( "%d", sum );

    return 0;
}