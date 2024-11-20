#include<stdio.h>
#include<math.h>
int main(){ 
    int n,a[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
	int t = 0,sum=0; 
	for (int i = 0; i < n; i++){ 
		for (int j = i + 1; j < n; j++){ 
			if (a[i] < a[j]) { 
				t = a[i]; 
				a[i] = a[j]; 
				a[j] = t; 
			} 
		} 
	}
	for (int i = 0; i < n; i++){
		sum+=pow(n,i)*a[i]; 
	}
	printf("%d",sum);
	return 0; 
}
