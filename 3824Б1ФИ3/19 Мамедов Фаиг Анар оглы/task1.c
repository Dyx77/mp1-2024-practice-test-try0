// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  return 0;
}
    if (a > 0 && b > INT_MAX - a) return INT_MAX;
    if (a < 0 && b < INT_MIN - a) return INT_MIN;
    return a + b;
}

int main() {
    int a = 10, b = 20;
    int sum = sum_of_two_numbers(a, b);
    printf("Сумма: %d\n", sum);
    return 0;
}
