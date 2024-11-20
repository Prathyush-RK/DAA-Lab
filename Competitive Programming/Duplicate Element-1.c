#include<stdio.h>
int main(){
    int n,l,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    l=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if (i!=j && a[i]==a[j] && temp!=a[i]){
                printf("%d",a[i]);
                temp=a[i];
            }
        }
    }
    return 0;
}
