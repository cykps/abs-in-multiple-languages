#include <stdio.h>
main() {
    unsigned char i, n, r=1;
    unsigned int s=0;
    scanf("%u", &n);
    for (i=0; i<n; i++) {
        unsigned int t;
        scanf("%u", &t);
        s |= t;
    }
    while (s == s >> r << r) {
        r++;
    }
    printf("%d", r-1);
}