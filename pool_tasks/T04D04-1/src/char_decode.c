#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("n/a", argv[0]);
        return 1;
    }
    if (argv[1] == 1) {
        char stri;
        printf("шестнадцатеричное значение: ");
        scanf("%2s", stri);
        printerchar(stri);
    } else if (argv[1] == 0) {
        char ch;
        printf("Введите символ: ");
        scanf("%c", &ch);
        printer16x(ch);
    }
    return 0;
}

int printerchar(char a) {
    printf("%c", a);
    return 0;
}

int printer16x(char a) {
    printf("%02X", (unsigned char)ch);
    return 0;
}
