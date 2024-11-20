#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int n1, n2;
    scanf("%d", &n1);
    int a1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    scanf("%d", &n2);
    int a2[n2];
    for (int j = 0; j < n2; j++) {
        scanf("%d", &a2[j]);
    }
    int i,j;
    i=j=0;
    while(i<n1 && j<n2)
    {
            if (a1[i] == a2[j]) {
                printf("%d ", a1[i]);
                i++;j++;
            }
            else if(a1[i]<a2[j])
            i++;
            else
            j++;
    }
    return 0;
}
