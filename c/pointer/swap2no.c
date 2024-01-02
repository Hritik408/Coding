#include <stdio.h>
  void swap(int *,int *);
int main(){
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("before swap %d %d\n",a,b);
    swap(&a,&b);
    printf("after swap %d %d\n",a,b);
    return 0;

}   void swap(int *x,int *y){
       int temp=*x;
       *x=*y;
       *y=temp;
       printf("\nafter swap two %d %d\n",*x,*y);
}   //swap 2 no by pass by refrence..