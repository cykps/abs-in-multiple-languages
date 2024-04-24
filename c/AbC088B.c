#include <stdio.h>
#include <stdlib.h>

int f(const void * a1, const void * a2) {
    if (*(int *)a1 < *(int *)a2) {
        return 1;
    } else if (*(int *)a1 > *(int *)a2) {
        return -1;
    } else {
        return 0;
    }
}

main() {
    int n, i;
    scanf("%u", &n);
    int a[n];
    for (i=0; i<n; i++) {
        scanf("%u", &a[i]);
    }
    qsort(a, n, sizeof(int), f);
    int ali=0, bob=0;
    for (i=0; i<n; i++) {
        if (i%2) {
            bob += a[i];
        } else {
            ali += a[i];
        }
    }
    printf("%d", ali-bob);
}