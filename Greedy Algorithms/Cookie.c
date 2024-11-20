#include<stdio.h>
int main(){
    int ch,c,g[10],s[10],count=0,visited=0;
    scanf("%d",&ch);
    for(int i=0;i<ch;i++){
        scanf("%d",&g[i]);
    }
    scanf("%d",&c);
    for(int j=0;j<c;j++){
        scanf("%d",&s[j]);
    }
    for(int i=0;i<ch;i++){
        for(int j=0;j<c;j++){
            if(g[i]<=s[j] && g[i]!=visited){
                count++;
                visited=g[i];
            }
        }
    }
    printf("%d",count);
    
}
