#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

int main()
{
    char Text[100] = {};
    printf_s("Geben sie einen Text ein:\n");
    gets_s(Text);
    char* myPointer = Text;
    printf_s("Edited Text:");

    while (*myPointer != '\0') {
        if (*myPointer >= 'a' && *myPointer <= 'z') {
            printf_s("%c", (*myPointer) - ('a' - 'A'));
        }
        else {
            printf_s("%c", (*myPointer));
        }
        myPointer++;
    }


    printf_s("\nOriginaltext:%s", Text);

    return 0;
}
