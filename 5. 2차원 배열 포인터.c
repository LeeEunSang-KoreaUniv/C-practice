#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int arr2d[2][3]={{1,2,3}, {4,5,6}};
   printf("%p\n", arr2d);
   printf("%p\n", arr2d[0]);
   printf("%p\n", &arr2d[0][0]);
   printf("%d\n", arr2d[0]);
   printf("%p\n", arr2d[1]);
   printf("%d\n", arr2d[1]);
   printf("%d\n", arr2d[1][0]);

   if(arr2d[1]==arr2d+1)
     printf("yes\n");

   int* ptr=arr2d+1;
   ptr[2]=0;
   printf("%d", arr2d[1][0]);
   return 0;
}
