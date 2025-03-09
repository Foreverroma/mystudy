#include <stdio.h>

int summ(int a, int b);
int diff(int a, int b);
int quot(int a, int b);
int segm(int a, int b);
int printer(int a);

int main() {
    int a;
    int b;
    int c;
    printf("Введите два числа через пробел\n");
    scanf("%d %d", &a, &b);
    while ((c = getchar()) != '\n') {
        if (c < '0' || c > '9' || c != ' ' || c != '-') {
            printf("Нужно вводить цифры, а не буквы");
            return 0;
        }
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

int summ(int a, int b) { return printer(a + b); }

int diff(int a, int b) { return printer(a - b); }

int segm(int a, int b) { return printer(a * b); }

int quot(int a, int b) {
    if (b == 0) {
        printf("n/a");
        return 0;
    }
    return printer(a / b);
}

int printer(int a) {
    printf("%d", a);
    return 0;
}