#include <math.h>
#include <stdio.h>

float stepen(float a, float b);

int main() {
    float x;  // Значение x
    float itog;
    float c;
    printf("Введите x\n");
    scanf("%fl", &x);
    while ((c = getchar()) != '\n') {
        if (c < '0' || c > '9' || c != '-') {
            printf("n/a");
            return 0;
        }
    }
    // формулa
    itog = 7e-3 * stepen(x, 4) + ((22.8 * stepen(x, (1.0 / 3.0)) - 1e3) * x + 3) / (x * x / 2) -
           x * stepen((10 + x), (2.0 / x)) - 1.01;
    printf("%.1f\n", itog);
    return 0;
}

float stepen(float a, float b) {
    for (int i = 0; i < b; i++) {
        a *= b;
    }
    return a;
}