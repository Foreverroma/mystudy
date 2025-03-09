#include <stdio.h>

int main() {
    int name;
    int a;
    scanf("%d", &name);
    while ((a = getchar()) != '\n') {
    }
    printf("Hello, %d!", name);
    return 0;
}
