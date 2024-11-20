#include<stdio.h>
int main(){
    int n,a[20],b[20],sum=0,i,j,temp;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]<b[j]){
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
            sum+=a[i]*b[i];
    }
    printf("%d",sum);
}
