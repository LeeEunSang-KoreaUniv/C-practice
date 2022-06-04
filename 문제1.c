#include <stdio.h>
#include <stdlib.h>


int main(){
   int arr[6]={1,2,3,4,5,6};
   for(int i=0;i<6;i++){
      *(arr+i)+=2;
   }
   printf("%d %d %d %d %d %d", *arr, *arr+1, *arr+2, *arr+3, *arr+4, *arr+5);

   return 0;

}



