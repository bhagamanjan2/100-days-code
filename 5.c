// Write a program to convert temperature from Celsius to Fahrenheit

#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf(" enter temp celsius = ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf(" temp in fahrenheit = %f\n",fahrenheit);
    return 0;



}