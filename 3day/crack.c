#include <stdio.h>

int main() {
    float x;
    float y;
    char c;
    if (scanf("%f%f%c", &x, &y, &c) != 2 && c != '\n') {
        printf("n/a");
        return 0;
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
