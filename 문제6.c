
#include <stdio.h>
#include <stdlib.h>


int main(){
    int num,i,b, a[1000];
    printf("���ڿ� �Է�: ");
    scanf_s("%d", &num);
    for(b=0,i=num;i!=1;b++){
      a[b]=i%2;
      i/=2;
     }
    a[b]=1;
    printf("���: ");
    for(int j=0;j<=b;j++){
      printf("%d", a[b-j]);
      }
   return 0;
}
