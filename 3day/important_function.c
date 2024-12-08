#include <math.h>
#include <stdio.h>

int main() {
    float x;  // Значение x
    char c;
    float itog;
    if (scanf("%f%c", &x, &c) != 1 && c != '\n') {
        printf("n/a");
        return 0;
    }
    itog = 7e-3 * pow(x, 4) + ((22.8 * pow(x, (1.0 / 3.0)) - 1e3) * x + 3) / (x * x / 2) -
    x * pow((10 + x), (2.0 / x)) - 1.01;
    printf("%.1f\n", itog);
    return 0;
}
