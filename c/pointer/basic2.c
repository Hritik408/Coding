#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;   //int* int ka add store krta hai.
    //  VVIP  *x=7 ,  a is changed
    int** y=&x;   //int** int* ka add store krta hai.
    int*** z=&y;
    int**** k=&z;
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d\n",***z);
    printf("%d\n",****k);
    return 0;
}