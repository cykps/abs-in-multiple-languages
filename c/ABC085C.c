main() {
    int n, y, a, b;
    scanf("%d %d", &n, &y);
    for (a=0; a<=n; a++) {
        for (b=0; b<=n-a; b++) {
            int c=n-a-b;
            if (10000*a + 5000*b + 1000*c == y) {
                printf("%d %d %d", a, b, c);
                return 0;
            }
        }
    }
    printf("%d %d %d", -1, -1, -1);
}