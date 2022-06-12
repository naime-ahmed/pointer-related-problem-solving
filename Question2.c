#include<stdio.h>
#include <string.h>

char convertToChar(int *num, double *Num){

    char intToChar = 'P';


    return intToChar;
}

int main(){

    int num;
    scanf( "%d", &num );
    double Num;
    scanf( "%lf", &Num );

    convertToChar(&num, &Num);

    printf("%c", convertToChar(&num, &Num));

    return 0;
}