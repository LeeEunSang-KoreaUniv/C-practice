#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int arr[2][2][2]={1,2,3,4,5,6,7,8};
   printf("%d \n", *((**(arr+1))+1));
   printf("%d \n", *(*((arr+1)[0])+1));
   printf("%d \n", ((arr[1])[0])[1]);
   printf("%d \n", (*(arr[1]))[1]);
   printf("%d \n", ((*(arr+1))[0])[1]);

   return 0;
}
