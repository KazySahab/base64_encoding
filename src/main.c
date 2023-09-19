#include "../include/binary_conversion.h"
int main()
{
    char take_input[30];
    printf("Enter a word : ");
    scanf("%s", take_input);
    fflush(stdin);
    binary_conversion(take_input);
    getchar();
    return 0;
}