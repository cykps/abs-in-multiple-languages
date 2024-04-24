#include <stdio.h>
main() {
    int n, a, b, i, r=0;    
    scanf("%d %d %d", &n, &a, &b);
    for (i=1; i<=n; i++) {
        char s = i%10 + i/10%10 + i/100%10 + i/1000%10 + i/10000%10;
        if (a <= s && s <= b) {
            r += i;
        }
    }
    printf("%d", r);
}