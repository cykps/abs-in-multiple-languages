main() {
    char s[100001], *s0="dream", *s1="dreamer", *s2="erase", *s3="eraser";
    char *ss[] = {&s0, &s1, &s2, &s3};
    int i;
    scanf("%s", s);
    printf("%s %d", s, strlen(s));

    int b=0, i, j;
    while (1) {
        for (j=0; j<sizeof(ss); j++) {
            for (i=0; i<strlen(ss[j]); i++) {
                if (s[b+i] != ss[j][i]) {
                    break;
                }
            }
            if 
            b = strlen(ss[j]);
        }
    }
}