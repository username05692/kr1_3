#include <stdio.h>
#include <ctype.h>
#include <locale.h>

#define M 100

int main() {
    setlocale(LC_CTYPE, "ukr"); // Встановлення української локалізації
    char str[M];

    printf("Введiть рядок тексту: ");
    fgets(str, sizeof(str), stdin); //Введення рядку
    printf("\n");
    int count = 0; // лічильник цифр
    // Підрахунок та заміна 
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) { // якщо поточний символ є числом
            str[i] = 'Ч'; // заміна на символ 'Ч'
            count++; // збільшення лічильника
        }
    }
    if (count) { //Перевірка на наявність змінених знаків
        printf("Змiнений рядок: %s\n", str);
        printf("Кiлькiсть цифр: %d\n", count);
    }
    else printf("Незнайдено жодного числа");

    return 0;
}
