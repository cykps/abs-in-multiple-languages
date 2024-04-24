#include <stdio.h>
main() {
    unsigned char a, b, c, i, j, k;
    unsigned int x, r=0;
    scanf("%u\n%u\n%u\n%u", &a, &b, &c, &x);
    for (i=0; i<=a; i++) {
        for (j=0; j<=b; j++) {
            for (k=0; k<=c; k++) {
                if (500*i + 100*j + 50*k == x) {
                    r++;
                }
            }
        }
    }
    printf("%d", r);
}