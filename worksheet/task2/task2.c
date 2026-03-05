/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Yousuf Alqasim
 * ID: 201985816
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char hex[9];
    long decimal = 0;
    int value;
    int i;

    printf("Enter a hexadecimal: ");
    scanf("%8s", hex);

    for(i = 0; i < strlen(hex); i++)
    {
        char c = hex[i];

        if(c >= '0' && c <= '9')
        {
            value = c - '0';
        }
        else if(c >= 'A' && c <= 'F')
        {
            value = c - 'A' + 10;
        }
        else if(c >= 'a' && c <= 'f')
        {
            value = c - 'a' + 10;
        }
        else
        {
            printf("Error: Invalid Hexadecimal\n");
            return 1;
        }

        decimal = decimal * 16 + value;
    }

    printf("%ld\n", decimal);

    return 0;
}