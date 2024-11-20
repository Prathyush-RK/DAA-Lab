#include <stdio.h>
int find(int A[], int n, int k) {
    int i = 0, j = 1;
    while (j < n) {
        int diff = A[j] - A[i];
        if (diff == k && i != j) {
            return 1;
        }
        if (diff < k) {
            j++;
        } else {
            if (i < j - 1) {
                i++;
            } else {
                j++;
            }
        }
    }
    return 0;
}
int main() {
    int n, k;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &k);
    int result = find(A, n, k);
    printf("%d\n", result);
    return 0;
}
