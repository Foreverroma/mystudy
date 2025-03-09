#include <stdio.h>

int main() {
    int name;
    int a;
    printf("Введите цифровое имя\n");
    scanf("%d", &name);
    while ((a = getchar()) != '\n') {
        if (a < '0' || a > '9') {
            printf("Нужно вводить цифры, а не буквы");
            return 0;
        }
    }
    printf("Hello, %d!", name);
    return 0;
}
