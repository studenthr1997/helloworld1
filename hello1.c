#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);
        sum += k;
    }

    printf("%d\n", sum / n);

    return 0;
}
