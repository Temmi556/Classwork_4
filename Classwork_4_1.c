#include <stdio.h>

// --- ФУНКЦИИ-ЗАДАНИЯ ---

// Функция 1: Работа с вводом/выводом и частями чисел
int task_1() {
    char c = '!'; 

    int i = 2;

    float f = 3.14f;

    double d = 5e-12;

    printf("%c\n", c);
    printf("%d\n", i);
    printf("%f\n", f);
    printf("%lf\n", d);
    printf("Введите значения символов и чисел: ");
    scanf("%c %d %f %lf", &c, &i, &f, &d);
    printf("%c %d %.2f %e\n", c, i, f, d);
    //task 1a
    printf("Целая часть числа f: %d\n и дробная часть числа f: %0.2f\n", (int)f, f - (int)f);
    printf("Целая часть числа d: %d\n и дробная часть числа d: %0.2f\n", (int)d, d - (int)d);
    //task 1b
    printf("16 ричный код символа %c: %x\n", c, c);
    printf("10 тичный код символа %c: %d\n", c, c);
    //task 1v
    float i_1 = 2;
    float a = 1/i_1;
    printf("%.1f\n", a);
}

// Функция 2: Вывод кодов символов и 1/i (обратная величина)
int task_2() {
    int a_1 = 11;
    int b = 3;
    int x;
    float y;
    double z;
    x = a_1/b;
    y = a_1/b;
    z = a_1/b;
    printf("%d\n", x);// производится вычисление 3.2 а потом присваивание 3
    printf("%f\n", y);// производится вычисление 3.2 а потом присваивание 3.0   
    printf("%lf\n", z);// производится вычисление 3.2 а потом присваивание 3.0
    printf("Вывод типа float %.1f\n и double %.1lf\n", (float)a_1/b, (double)a_1/b);
    
}

// Функция 3: Эксперименты с преобразованием типов
int task_3() {
    int a,summa_zifr,chislo_naoborot,summa_zifr_1,chislo_naoborot_1;
    printf("Введите 3 значеное число: ");
    scanf("%d", &a);
    printf("Последняя цифра числа %d\n",a%10);
    printf("Первая цифра числа %d\n",a/100);
    summa_zifr = (a/100) + (a/10%10) + (a%10);
    printf("Сумма цифр числа %d\n",summa_zifr);
    chislo_naoborot = (a%10)*100 + (a/10%10)*10 + (a/100);
    printf("Число наоборот %d\n",chislo_naoborot);
    int n;
    printf("Введите 3 значеное число: ");
    scanf("%d", &n);
    summa_zifr_1 = (n/100) + (n/10%10) + (n%10);
    chislo_naoborot_1 = (n%10)*100 + (n/10%10)*10 + (n/100);
    printf("Последняя цифра числа %d первая цифра числа %d сумма цифр %d число наоборот %d\n",n%10,n/100,summa_zifr_1,chislo_naoborot_1);
}

// --- ГЛАВНАЯ ФУНКЦИЯ ---

int main() {
    task_3(); // <-- Сейчас запущено Задание 2
}