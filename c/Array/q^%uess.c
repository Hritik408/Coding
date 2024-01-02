#include<stdio.h>
   void fun(int a[],int n){     //a is pointer = int* a = int a[].. as we write
   // int n=sizeof(a)/sizeof(int);    //here size of a is 8 byte and size of int 4 byte so n=2 times loop run.
   printf("\n");
    for(int i=0;i<n;i++)    
    printf("%d\n",a[i]);

   }
int main(){
 int a[]={10,20,30,40,50};
  int n=sizeof(a)/sizeof(int);    
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
    fun(a,n);     //fun(a,n)  is true.   n=5 we can write 5 n ki jagah.
    return 0;
}   //size of a is 20 because 5*no of bites(4)
//size of int is 4 byte so value of n is 5 
// array always call by refrence not call by value.

//don't calculate size of array when function call..