#include<stdio.h>
#include<string.h>
int main(){
    char s1[100], s2[200];
    int m,n;
    scanf("%s %s",s1,s2);
    m=strlen(s1);
    n=strlen(s2);
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
            }
        }
    }
    printf("%d\n",dp[m][n]);
    return 0;
}
