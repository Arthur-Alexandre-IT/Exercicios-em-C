#include <stdio.h>

float fahrenheit (float x) {   
    int fahrenheit = x * (9/5 + 32);
    
    return fahrenheit;
}

float kelvin (float x) {
    int kelvin = x + 273.15;

    return kelvin;
}

int main() {
    float temperatura;

    printf("\nDigite uma temperatura em Celcius que deseja converter: ");
    scanf("%f", &temperatura);
    printf("\nTemperatura em Fahrenheit: %.2f\n\n", fahrenheit(temperatura));
    printf("Temperatura em Kelvin: %.2f\n", kelvin(temperatura));
    return 0;
}