// Write a program to print the sum of the first n odd number
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d odd numbers are:\n", n);

    for (i = 1; i <= n; i++) {
        int odd = 2 * i - 1;  
        printf("%d ", odd);
        sum += odd;
    }

    printf("\nSum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
