#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

void revArr(int size, int array[]){

  int temporary, i, j;

  for(i=0 ,j=size-1; i<j; i++,j--){

    temporary=*(array+i);
    *(array+i)=*(array+j);
    *(array+j)=temporary;
  }
}

int main(){

  int size,i;

  scanf("%d", &size);

  int arr[size];

  for(i=0;i<size;i++)
  {
    scanf("%d", &arr[i]);
  }

  revArr(size, arr);

  for(i=0;i<size;i++){
    printf("%d ", arr[i]);
  }
  
  return 0;
}

