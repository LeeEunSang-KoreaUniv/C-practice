#include <stdio.h>


int main(){
   int num1, num2;
   scanf_s("%d %d", &num1, &num2);
   int p, q, r, g;
   if(num1>num2){
      p=num1; q=num2;
   }
   else{
      p=num2; q=num1;
   }
   g=q;
   for(r=p%q;r>0;){
      p=q, q=r, r=p%q, g=q;

   }
   printf("The greatest common dividor of %d and %d is %d.", num1, num2, g);
   return 0;
}
