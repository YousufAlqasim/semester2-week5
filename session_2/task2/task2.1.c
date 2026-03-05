// Week 5, Session 2

/* Task 2.1
 * Temperature conversion with input validation
 * Converts temperatures between Celsius and Fahrenheit with error checking
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For toupper function

int main(void) {
    char input[50];
    float temperature;
    char scale;
    int valid_input = 0;
    float converted_temp;
    
    printf("=== Temperature Converter ===\n");
    
    // TODO: Keep asking until valid input is provided
    // Use an appropriate loop structure
    
        printf("Enter temperature with scale (e.g., 23.5C or 75F): ");
        do {
            fgets(input,sizeof(input),stdin);
            input[strcspn(input, "\n")] = 0;
            int num_scanned = sscanf(input, "%f%c", &temperature, &scale);
            scale = toupper(scale);
            valid_input = num_scanned == 2 && (scale =='C'|| scale == 'F');

        } while(valid_input=0);{ 
        printf("Error wrong format");
        }

    // TODO: Perform conversion based on the input scale
    // - If Celsius, convert to Fahrenheit: F = C * 9/5 + 32
    // - If Fahrenheit, convert to Celsius: C = (F - 32) * 5/9
    // - Print the result with appropriate formatting, including the degree symbol (°)
    //   Hint: Use printf("%.1f°C is equal to %.1f°F\n", temperature, converted_temp);
    
    return 0;
}
