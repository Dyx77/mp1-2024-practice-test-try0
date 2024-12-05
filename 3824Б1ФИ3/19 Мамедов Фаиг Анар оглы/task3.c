// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
  return 0.0;
  return (a > b) ? a : b;
}

int main() {
    double num1, num2;

    // Ввод чисел от пользователя
    printf("Введите первое вещественное число: ");
    scanf("%lf", &num1);
    printf("Введите второе вещественное число: ");
    scanf("%lf", &num2);

    // Вывод максимального числа
    printf("Максимум из %.2f и %.2f: %.2f\n", num1, num2, max_of_two_numbers(num1, num2));

    return 0;
}
