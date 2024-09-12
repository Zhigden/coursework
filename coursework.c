#include <stdio.h>
#include <math.h>

// Проверить, является ли число простым
int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Проверить, является ли число кубом
int is_cube(int n) {
    for (int i = 1; i <= cbrt(n); i++) {
        if (i * i * i == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    // Перебрать все трехзначные числа
    for (int number = 100; number <= 999; number++) {
        // Разобрать число на цифры
        int digits[3];
        digits[0] = number / 100;
        digits[1] = (number % 100) / 10;
        digits[2] = number % 10;

        // Проверить, является ли число КУБ
        if (is_cube(digits[0] * 100 + digits[1] * 10 + digits[2])) {
            printf("КУБ = %d\n", digits[0] * 100 + digits[1] * 10 + digits[2]);
        }

        // Проверить, является ли число БУК
        if (is_prime(digits[0] * 100 + digits[1] * 10 + digits[2])) {
            printf("БУК = %d\n", digits[0] * 100 + digits[1] * 10 + digits[2]);
        }
    }

    return 0;
}