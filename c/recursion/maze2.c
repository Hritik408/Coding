#include <stdio.h>
int maze(int a,int b ){
    int rightways=0,downways =0;
  if(a==1&&b==1) return 1;
  if(a==1) rightways+=maze(a,b-1);
  if(b==1) downways+=maze(a-1,b);
   if(a>1&&b>1) {
    rightways+=maze(a,b-1);
    downways+=maze(a-1,b);}
   return rightways+downways;}    
int main(){
    int a,b;
    printf("enter a number of rows");
    scanf("%d",&a);
    printf("enter a number of columns ");
    scanf("%d",&b);
    int x=maze(a,b);
    printf("%d",x);
    return 0;
}
