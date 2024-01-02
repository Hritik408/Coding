#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
   int arr[m][m];
   printf("enter the elements\n");
   for(int i=0;i<m;i++){
      for (int j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
            }
            for(int i=0;i<m;i++){
                for (int j=0;j<=i;j++){
               int temp=arr[i][j];
               arr[i][j]=arr[j][i];
               arr[j][i]=temp;
                }
            }
            for(int i=0;i<m;i++){
                for (int j=0,k=m-1;j<=k;j++,k--){
                    int temp=arr[i][j];
                    arr[i][j]=arr[i][k];
                    arr[i][k]=temp;
                }}
                for(int i=0;i<m;i++){
                    if(i%2==0){
                        for(int j=m-1;j>=0;j--)
                        printf("%d ",arr[i][j]);
                    } else {
                        for (int j=0;j<m;j++)
                          printf("%d ",arr[i][j]);
                    } printf("\n"); }
            return 0;}