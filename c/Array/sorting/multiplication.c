#include <stdio.h>
int main(){
    int p,q;
    printf("enter row and column of first matix\n");
    scanf("%d %d",&p,&q);
    int arr[p][q];
    printf("enter elements of first matrix \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
        scanf("%d",&arr[i][j]);
        }
    }   int r,s;
    printf("enter row and column of second matrix\n");
    scanf("%d %d",&r,&s);
    int brr[r][s];
    printf("enter elements of second matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++)
        scanf("%d",&brr[i][j]);
        
    }   if(q!=r)
      printf("multiplication is not possible");
      else{
        int res[p][s];
        for(int i=0;i<p;i++){
            for(int j=0;j<s;j++){
                res[i][j]=0;
                for(int k=0;k<q;k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }    for(int i=0;i<p;i++){
            for(int j=0;j<p;j++)
                printf("%d ",res[i][j]);
                printf("\n");
            
        }
      }  
    return 0;
}