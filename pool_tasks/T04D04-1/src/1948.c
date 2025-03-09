#include <stdio.h>

int tipodelenie(int a);
int simplecharm(int a);
int printer(int a, int b);

int main() {
    int a;
    int c;
    int itog;
    int check;
    printf("Введите число a: ");
    scanf("%d", &a);
    while ((c = getchar()) != '\n') {
        if (c < '0' || c > '9' || c != ' ' || c != '-') {
            printf("error, n/a");
            return 0;
        }
    }
    itog = tipodelenie(a);
    check = simplecharm(itog);
    printer(itog, check);
}
// tipo delenie
int tipodelenie(int a) {
    for (int i = a; i >= 2; i--) {
        if (simplecharm(i)) {
            int temp = a;
            while (temp >= i) {
                temp -= i;
            }
            if (temp == 0) {
                return i;
            }
        }
    }
    return -1; // esli nety takogo
}
// proverka na prostoe schislo
int simplecharm(int a) {
    int temp;
    if (a < 2) {  // esli < 2 to gg
        return 0;
    }
    for (int i = 2; i < a; i++) {
        temp = a;
        while (temp >= i) {
            temp -= i;
        }
        if (temp == 0) {  // esli ne nashli
            return 0;
        }
    }
    return 1;
}

// pechataem
int printer(int a, int b) {
    if (b == 1) {
        printf("%d\n", a);
    } else {
        printf("Простые делители не найдены.\n");
    }
    return 0;
}
