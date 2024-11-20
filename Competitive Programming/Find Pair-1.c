#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    int found=0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if (a[j] - a[i] == k) {
                found=1;
                break;
            }
        }
        if(found)
            break;
    }
    if(found)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
