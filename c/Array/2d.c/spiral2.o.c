#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
   int arr[m][n];
   printf("enter the elements\n");
   for(int i=0;i<m;i++){
      for (int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);}
            int sr=0;
            int sc=0;
            int er=m-1;
            int ec=n-1;
            int count=0;
            int tne=m*n;
            while(count<tne){
                for(int i=sc;i<=ec&&count<tne;i++){
                printf("%d",arr[sr][i]);
                count++;
            }  sr++;
            for(int i=sr;i<=er&&count<tne;i++){
              printf("%d",arr[i][ec]);
              count++;
            }  ec--;
            for(int i=ec;i>=sc&&count<tne;i--){
                printf("%d",arr[er][i]);
                count++;
            }  er--;
            for (int i=er;i>=sr&&count<tne;i--){
                printf("%d",arr[i][sc]);
                count++;
            }  sc++;
            }
            return 0;
           }
            







        