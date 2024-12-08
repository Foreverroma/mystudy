#include <stdio.h>

void summ(int a, int b);
void diff(int a, int b);
void quot(int a, int b);
void segm(int a, int b);

int main() {
    int a;
    int b;
    if (scanf("%d %d", &a, &b) != 2 || b == 0) {
        printf("n/a");
        return 0;
    }
    summ(a, b);
    printf(" ");
    diff(a, b);
    printf(" ");
    segm(a, b);
    printf(" ");
    quot(a, b);
    printf("\n");
    return 0;
}

void summ(int a, int b) { printf("%d", a + b); }

void diff(int a, int b) { printf("%d", a - b); }

void segm(int a, int b) { printf("%d", a * b); }

void quot(int a, int b) { printf("%d", a / b); }
