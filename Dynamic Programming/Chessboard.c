#include<stdio.h>
int max(int a, int b) {
    return a > b ? a : b;
}
int main(){
    int n;
    scanf("%d",&n);
    int grid[99][99]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    int dp[99][99]={0};
    dp[0][0]=grid[0][0];
    for(int i=0;i<n;i++){
        dp[i][0]=dp[i-1][0]+grid[i][0];
        dp[0][i]=dp[0][i-1]+grid[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1])+grid[i][j];
        }
    }
    printf("%d",dp[n-1][n-1]);
    return 0;
}
