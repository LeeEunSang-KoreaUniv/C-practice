#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* a, int* b){
     int t=*a;
     *a=(*b);
     *b=t;
     }


int main(){
    int a,b;
    printf("a=");
    scanf_s("%d", &a);
    printf("b=");
    scanf_s("%d", &b);
    printf("a=%d b=%d\n", a, b);
    void (*fptr) (int*, int*);
    fptr=swap;
    fptr(&a, &b);
    printf("swap!\n");
    printf("a=%d b=%d", a, b);

   return 0;
}
