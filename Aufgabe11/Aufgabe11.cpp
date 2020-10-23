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
    int count = 1;
    while (*myPointer != '\0') {
        if (*myPointer == ' ' && *(myPointer - 1) != ' ') {
            count++;
        }
        myPointer++;
    }
    printf_s("Count of Words:%d", count);


    printf_s("\nOriginaltext:%s", Text);

    return 0;
}
