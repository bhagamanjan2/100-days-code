// Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>

int main() {
	int a, b, c;
	printf("enter a");
	scanf("%d",&a);
    printf("enter b");
	scanf("%d",&b);
    printf("enter c");
	scanf("%d",&c);
    if (a > b && a > c) {
        printf("a is largest among them");
    }
    else if (b > a && b > c) {
        printf("b is largest among them");
    }
    else {
        printf("c is largest among them");
    }

return 0;
}
