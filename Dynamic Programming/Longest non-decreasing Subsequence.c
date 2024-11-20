#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int dp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        dp[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<=arr[i] && dp[i]<(dp[j]+1)){
                dp[i]=(dp[j]+1);
            }
        }
    }
    int max=dp[0];
    for(int i=1;i<n;i++){
        if(max<dp[i]){
            max=dp[i];
        }
    }
    printf("%d",max);
}
