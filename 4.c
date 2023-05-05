#include <stdio.h>

void main() {
    // Создаем переменную "digit", а также определяем ее размер в байтах:
    int digit, bin[sizeof(digit)*8], sign = 0;
    // Вводим число:
    scanf("%d", &digit);
    // Создаем условие: если введенное число отрицательное, то "sign" равен 1, и делаем переменную "digit" отрицательной:
    if (digit < 0)
    {
        sign = 1;
        digit = -digit;
    }
    int i = 0;
    // Создаем цикл, который выполняет перевод числа из десятичной в двоичную систему счисления:
    while (digit != 0)
    {
        // Делим число на 2 и записываем остаток:
        bin[i++] = digit % 2;
        digit = digit / 2;
    }
    // Если "sign" равен 1, выводим минус перед полученным остатком:
    if (sign == 1) printf("-");
    while (i > 0)
        // Выводим полученный остаток в обратном порядке:
        printf("%d", bin[--i]);
}