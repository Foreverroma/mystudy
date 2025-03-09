#include <stdio.h>

int maxnumb(int a, int b);

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d", &a, &b);
    while ((c = getchar()) != '\n') {
        if (c < '0' || c > '9' || c != ' ' || c != '-') {
            printf("n/a");
            return 0;
        }
    }
    maxnumb(a, b);
    return 0;
}

int maxnumb(int a, int b) {
    if (a > b) {
        printf("%d", a);
        return 0;
    }
    if (a < b) {
        printf("%d", b);
        return 0;
    }
    if (a == b) {
        printf("%d", a);
        return 0;
    }
    return 0;
}