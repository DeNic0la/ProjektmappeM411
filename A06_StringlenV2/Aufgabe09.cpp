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
    while (*myPointer != '\0' && *myPointer == ' ') {
        myPointer++;
    }
    char newText[100] = {};
    char* pointerForNewCharText = newText;

    while (*myPointer != '\0') {
        printf_s("%c", *myPointer);
        *pointerForNewCharText = *myPointer;
        pointerForNewCharText++;
        myPointer++;
    }


    printf_s("\nOriginaltext: %s", Text);
    printf_s("\nNeuer Text: %s", newText);

    return 0;
}
