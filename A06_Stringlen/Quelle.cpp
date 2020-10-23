#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

int main()
{
    char Text[100] = {};
    gets_s(Text);
    int i = 0;
    while (Text[i] != '\0') { i++; }
    printf_s("Der Text ist %i Zeichen Lang\n", i);

    printf_s("%s", Text);


    return 0;
}