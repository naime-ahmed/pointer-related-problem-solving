#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

// find gcd of 2 numbers func

int findGcd(int num1, int num2){

    if (num2 == 0)
    {
        return num1;
    }
    return findGcd(num2, num1 % num2);
}

// here is the program to find gcd of 10 integers.

int main(){

    int numsArr[10];

    for (int i = 0; i < 10; i++)
    {
        scanf( "%d", &numsArr[i] );
    }

    int mainGcd = numsArr[0];

    for (int i = 0; i < 10; i++)
    {
        mainGcd = findGcd(numsArr[i], mainGcd);

        if(mainGcd == 1)
        {
           mainGcd = 1;
        }
    }
    
    printf( "%d", mainGcd );
    
    
    return 0;
}