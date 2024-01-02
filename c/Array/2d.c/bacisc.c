#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
   int arr[m][n],brr[m][n];
    int sum=0;
   for(int i=0;i<m;i++){
      for (int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
        }2

      for(int i=0;i<m;i++){
      for (int j=0;j<n;j++)
            scanf("%d",&brr[i][j]);
        }
      for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=arr[i][j]+brr[i][j];
             printf("%d",sum);
        } printf("\n");
      }
        // printf("%d",sum);

      


    return 0;
}