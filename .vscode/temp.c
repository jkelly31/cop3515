#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main() {
    // set var to hold unit c or f
    char unit;
    // set float vars for temp & conv temp
    float temp, converted;

    // ask user for unit
    printf("What type of temperature will you be entering (c/f)? \n");
    // assign user input to unit var
    scanf(" %c", &unit);

    // ask user for temp to convert
    printf("What temperature value should be converted? \n");
    // assign user input to temp var
    scanf("%f", &temp);

    // check if user entered c or f
    if (unit == 'f' || unit == 'F') {
        converted = (temp - 32) / 1.8;   // calculate conversion f -> c
        printf("Given a Fahrenheit temperature of %.2f", temp);
        printf(" the equivalent Celsius temperature is %.2f\n", converted);
    } else if (unit == 'c' || unit == 'C') {
        converted = (temp * 1.8) + 32;   // calculate conversion c -> f
        printf("Given a Celsius temperature of %.2f", temp);
        printf(" the equivalent Fahrenheit temperature is %.2f\n", converted);
    } else {    // error msg for invalid input
        printf("Please enter valid temperature unit (c/f).");
    }

    return 0;
}

