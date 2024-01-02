#include<stdio.h>
int main(){
   int p,q,r,s;
   scanf("%d%d%d%d",&p,&q,&r,&s);
   int arr[p][q],brr[r][s];
   printf("enter the elements of first matrix\n");
   for(int i=0;i<p;i++){
    for(int j=0;j<q;j++)
    scanf("%d",&arr[i][j]);
   } printf("enter the elements of second matrix\n");
     for (int i=0;i<r;i++){
        for (int j=0;j<s;j++)
        scanf("%d",&brr[i][j]);}
        if(p!=r) 
        printf("multiply is not possible");
        else {
        int res[p][s];
        for (int i=0;i<p;i++){
            for (int j=0;j<s;j++){
                res[i][j]=0;
          for(int k=0;k<q;k++){
            res[i][j]+=arr[i][k]*brr[k][j];
          }
            } 
             }

           printf("multiply matrix is \n");
           for (int i=0;i<p;i++){
            for(int j=0;j<q;j++ ){
                printf("%d ",res[i][j]);
            }  printf("\n");
           }}
    return 0;
}