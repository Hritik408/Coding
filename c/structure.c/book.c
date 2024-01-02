#include<stdio.h>
#include<string.h>
typedef int* point;
int main(){
    int x=5,y=7;
   // int* a=&x,b=&y;
   point a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}

