#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Celsius = 0.0;
    double Fahrenheit = 0.0;

    printf("Clesius");
    scanf_s("%lf", &Celsius);

    Fahrenheit = (Celsius * 9.0 / 5.0) + 32;

    printf("Celsius = %lf\n", Celsius);
    printf("Fahrenheit = %lf\n", Fahrenheit);
    int* p = NULL;
    system("pause");
    return 0;
}