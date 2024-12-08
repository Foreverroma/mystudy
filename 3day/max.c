#include <stdio.h>

int maxnumb(int a, int b);

int main() {
    int a;
    int b;
    char c;
    if (scanf("%d %d%c", &a, &b, &c) != 2 && c != '\n') {
        printf("n/a");
        return 0;
    }
    maxnumb(a, b);
    return 0;
}

int maxnumb(int a, int b) {
    if (a > b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }
    return 0;
}
