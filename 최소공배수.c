#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2){
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
   return g;
}

int main(){
   int num1, num2;
   scanf_s("%d %d", &num1, &num2);
   int lcm=num1*(num2/(gcd(num1, num2)));
   printf("The least common multiple of %d and %d is %d.", num1, num2, lcm);

   return 0;
}
