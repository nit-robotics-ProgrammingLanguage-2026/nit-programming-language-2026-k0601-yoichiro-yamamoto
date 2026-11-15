#include <stdio.h>

int main(void)
{
    long n;
    long sum = 0;
    long loop;

    scanf("%ld", &n);

    if (n < 0) {
        printf("NG");
        return 0;
    }

    for (loop = 1; loop <= n; loop++) {
        sum += loop;
    }

    printf("%ld", sum);
    return 0;
}

