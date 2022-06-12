#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

void makeArr(int n, int squareArr[]){

    for (int i = 1; i <= n; i++)
    {
        squareArr[i-1] = i * i;
    }
}
int main(){

    int n;

    scanf( "%d", &n );
    int squareArr[n];

    makeArr(n, squareArr);

    for (int i = 0; i < n; i++)
    {
        printf( "%d ", squareArr[i] );
    }
    
    return 0;
}
