#include <stdio.h>
main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n], r=n;
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
        for (j=0; j<i; j++) {
            if (a[j] == a[i]) {
                r--;
                break;
            }
        }
    }
    printf("%d", r);
}