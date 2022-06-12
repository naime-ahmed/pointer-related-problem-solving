#include<stdio.h>
#include <math.h>


void makeSquare(){
    int num;

    scanf( "%d", &num );

    int squareNum = num * num;
    // we also can use builtin function. int squareNum = pow(num,2);

    printf( "%d", squareNum );
}

int main(){

    makeSquare();

    return 0;
}