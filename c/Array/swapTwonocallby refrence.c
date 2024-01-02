#include <stdio.h>
    void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    }
    int main (){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("before swap\n");
printf("%d %d\n",a,b);
   swap(&a,&b);
   printf("\nafter swap\n");
   printf("%d %d",a,b);
    return 0;

}