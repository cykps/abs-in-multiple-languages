#include <stdio.h>
main() {
    unsigned char i, r=0;
    unsigned int n;
    scanf("%u",&n);
    unsigned int a[n], b=2;
    for (i=0;i<n;i++) {
        scanf("%u", &a[i]);
    }
    while (1) {
        for (i=0;i<n;i++) {
            if (a[i]%b != 0) {
                goto done;
            }
        }
        r++;
        b *= 2;
    }
done:
    printf("%u",r);
}