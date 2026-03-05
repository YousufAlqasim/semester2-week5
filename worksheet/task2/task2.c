/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Yousuf Alqasim
 * ID: 201985816
 */
#include <stdio.h>
#include <string.h>

int main(void){
    long decimal = 0;
    char hex[9];
    int i;

    printf("Enter a hexadecimal: ");
    scanf("%8s", hex);

    // Validate hexadecimal digits
    for(i = 0; i < strlen(hex); i++){
        if(!isxdigit(hex[i])){ // function to see if each letter is a hex digit or not
            printf("Error: Invalid Hexadecimal\n");
            return 1;
        }
    }

    // Convert hex to decimal
    sscanf(hex, "%lx", &decimal); // reading x then converting to long decimal

    // Print result
    printf("decimal: %ld\n", decimal);

    return 0;
}