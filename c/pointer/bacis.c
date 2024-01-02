#include<stdio.h>
int main(){
     int a=5;
     int* x=&a;    //int* -> int ka add store krta h..
     *x=7;    //  a is changed..
     int** y=&x;
     printf("%p\n",x);
     printf("%p\n",&x);     //%p se add store hota hai..
     printf("%d\n",*x);     
     printf("%d\n",a);
     printf("%p",&a);
     printf("%d\n",**y);
     
 
    return 0;
}    //pointer ki help se kisi durse ke add pe padi hue chij ko change kar sakte hai..