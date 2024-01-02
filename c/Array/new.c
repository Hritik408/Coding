#include<stdio.h>
void fun(int* a){      //int a[]=int* a = arr[4]   all these treat as pointer.
    ++a;   //30 ka add ban gya.
    *a=*a**a;   //30*30
    ++a;    //40 ka add ban gya.
    *a=*a**a;       //40*40
    --a;     //30 ka add ban gya h.
    *a=*a**a;    // 900*900
    a=a-2;    //10 ka add ban gya h      
    *a=*a**a;     //10*10
    a+=2;   //30 ka add ban gya h        
      *a=*a-*a;    // 810000-810000
      a-=1;   //20 ka add ban gya h 
      *a=*a**a;    //20*20..    
      a-=1;   //10 ka add ban gya hai.
      *a=*a+*a;   //100+100         
}
int main(){
  int a[]={10,20,30,40};
    //int n=sizeof(a)/sizeof(int);
 fun(a+1);     //20 ka add jara hai  fun me n rakh bhi skte h na bhi
 printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
 return 0;
}     //  array jab bhi pass hota hai dusri taraf pointer banta hai..