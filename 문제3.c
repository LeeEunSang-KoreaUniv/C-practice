#include <stdio.h>
#include <stdlib.h>


int main(){
   char word[100];
   int a=0;
      printf("문자열 입력 : ");
      scanf_s("%s", word, 100);

      for(int i=0;word[i]!='\0';i++){
         a=(i+1);
      }
      for(int j=0;j<(a/2);j++){
         int b=word[j];
         int c=word[a-1-j];
         word[j]=c;
         word[a-1-j]=b;

      }
      printf("%s", word);
   return 0;
}
