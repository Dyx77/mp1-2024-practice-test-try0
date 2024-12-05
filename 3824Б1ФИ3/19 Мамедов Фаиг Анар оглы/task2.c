// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX

#include <limits.h>
#include <stdio.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    if (a > 0 && b > UINT_MAX / a) return UINT_MAX;
    return a * b;
}
int main() {
    unsigned int a = 100000;
    unsigned int b = 30000; 
    unsigned int result = product_of_two_numbers(a, b);
    printf("Произведение %u и %u равно %u\n", a, b, result);
    return 0;
}
