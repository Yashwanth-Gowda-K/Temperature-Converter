#include <stdio.h>

void celsius_to_fahrenheit();
void fahrenheit_to_celsius();

int main() {
    int choice;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        celsius_to_fahrenheit();
    } else if (choice == 2) {
        fahrenheit_to_celsius();
    } else {
        printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}

void celsius_to_fahrenheit() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
}


void fahrenheit_to_celsius() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
}
