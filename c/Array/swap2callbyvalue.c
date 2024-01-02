#include <stdio.h>
    void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    
    printf("after swap\n");
    printf("%d %d",x,y);
    //return ;
    }
    int main (){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("before swap\n");
printf("%d %d\n",a,b);
   swap(a,b);
    return 0;

}