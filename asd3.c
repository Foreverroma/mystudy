#include <stdio.h>

// Функция для объединения двух символьных массивов
void concatenate(char *destination, const char *source) {
  // Находим конец первой строки
  while (*destination != '\0') {
    destination++;
  }

  // Копируем символы из второй строки
  while (*source != '\0') {
    *destination = *source;
    destination++;
    source++;
  }

  // Добавляем символ конца строки
  *destination = '\0';
}

int main() {
  char str1[50] =
      "Hello, "; // Первый массив (достаточно большой для объединения)
  char str2[] = "world!"; // Второй массив

  // Объединяем str1 и str2
  concatenate(str1, str2);

  // Выводим объединенный результат
  printf("Результат объединения: %s\n", str1);

  return 0;
}
