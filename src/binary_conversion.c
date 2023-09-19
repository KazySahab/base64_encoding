#include "../include/binary_conversion.h"
void binary_conversion(char input[])
{
    char *binary;
    binary = (char *)calloc(strlen(input) , 8);
    int ascii_of_input;
    char binary_conversion[8];
    for (int i = 0; i < strlen(input); i++)
    {
        int j=0,k=0;
        ascii_of_input = input[i];
        while (j < 8)
        {
            if (ascii_of_input % 2)
            {
                binary_conversion[j] = '1';
            }
            else
            {
                binary_conversion[j] = '0';
            }
            ascii_of_input /= 2;
            j++;
        }
        strrev(binary_conversion);
        strcat(binary, binary_conversion);
    }
    printf("Binary of word : %s", binary);
    fflush(stdin);
    getchar();
}
