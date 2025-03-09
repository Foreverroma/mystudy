#include <math.h>
#include <stdio.h>
// компилируем с параметром -lm для мат.библиотеки

int main() {
    float x;
    float itog;
    float c;
    scanf("%f", &x);
    while ((c = getchar()) != '\n') {
        if (c < '0' || c > '9' || c != '-' || c != '.') {
            printf("n/a");
            return 0;
        }
    }
    itog = 7e-3 * pow(x, 4) + ((22.8 * pow(x, (1.0 / 3.0)) - 1e3) * x + 3) / (x * x / 2) -
           x * pow((10 + x), (2.0 / x)) - 1.01;
    printf("%.1f\n", itog);
    return 0;
}
