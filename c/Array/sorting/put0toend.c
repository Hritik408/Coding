#include <stdio.h>
int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    int ans[n];
    printf("enter the no of elements");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){             //arr[i] 0 ke barabar nahi hai..then apply condision
            ans[idx]=arr[i];
            idx++;
        }
    }    while(idx!=n){
        ans[idx]=0;
        idx++;
    }   for(int i=0;i<n;i++){
        printf("%d",ans[i]);
    }
       

    return 0;
}