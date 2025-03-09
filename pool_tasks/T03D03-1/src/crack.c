#include <stdio.h>

int main() {
    float x;  // Значение x
    float y;  // Значение y
    float c;
    printf("Введите x y\n");
    scanf("%f %f", &x, &y);
    while ((c = getchar()) != '\n') {
        if (c < '0' || c > '9' || c != '-' || c != '.') {
            printf("n/a");
            return 0;
        }
    }
    float check = (x * x) + (y * y);
    float krug = 25;
    if (check > krug) {
        printf("MISS");
    } else {
        printf("GOTCHA");
    }
    return 0;
}