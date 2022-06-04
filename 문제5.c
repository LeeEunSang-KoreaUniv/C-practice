#include <stdio.h>
#include <stdlib.h>


void evennumberfinder (int a[], int len){
    for(int i=0;i<len;i++){
      if ((a[i]%2)==0){
         printf("%d ", a[i]);
      }
    }
}
void oddnumberfinder (int a[], int len){
    for(int i=0;i<len;i++){
      if ((a[i]%2)==1){
         printf("%d ", a[i]);
      }
    }
}
int main(){
   int arr[10];
   for(int i=0;i<10;i++){
      printf("input : ");
      scanf_s("%d", &arr[i]);
      }
   printf("odd number : ");
   oddnumberfinder(arr, sizeof(arr)/sizeof(int));
   printf("\neven number : ");
   evennumberfinder(arr, sizeof(arr)/sizeof(int));

   return 0;
}
