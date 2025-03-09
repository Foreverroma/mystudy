#include <stdio.h>

int fibonacci(int index);

int main() {
  int a;
  int c;
  printf("Введите число n: ");
  scanf("%d", &a);
  while ((c = getchar()) != '\n') {
    if (c < '0' || c > '9') {
      printf("n/a");
      return 0;
    }
  }
  int result = fibonacci(a);
  printf("%d", result);
  return 0;
}

int fibonacci(int index) {
  if (index < 0) {
    return -1;
  }
  if (index == 0) {
    return 0;
  }
  if (index == 1) {
    return 1;
  }
  return fibonacci(index - 1) + fibonacci(index - 2);
}
