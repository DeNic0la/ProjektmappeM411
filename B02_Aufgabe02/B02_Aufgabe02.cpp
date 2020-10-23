#include <stdio.h>
#include <stdlib.h>
int Wert = 0;
int main()
{
    if (Wert >= 0) {
        double Wert = 15.5;
        printf("Wert = %lf\n", Wert);
    }
    else {
        printf("Der Wert ist negativ!");
    }
    system("pause");
    return 0;
}