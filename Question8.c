#include<stdio.h>
#include <string.h>

void CatThem(char *A, char *B, char *out){

    int len = 0;

    while (A[len] != '\0')
    {
        len++;
    }
    for (int j = 0; B[j] != '\0'; j++, len++)
    {
        A[len] = B[j];
    }
    A[len] = '\0';
    
    for (int j = 0; j < len; j++)
    {
        out[j] = A[j];
    }
    out[len] = '\0';
}

int main(){

    char string1[] = "clever";
    char string2[] = "developer";

    char out[50];

    CatThem(string1, string2, out);

    for (int j = 0; j < strlen(out); j++)
    {
        printf( "%c", out[j] ); 
    }

    return 0;
}