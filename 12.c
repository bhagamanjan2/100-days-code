// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main() {
    int a;
    printf("enter a =");
    scanf("%d",&a);
    if (a > 0) {
        printf("positive");
    }
    else if (a < 0) {
        printf("negative");
    }
    else {
        printf("zero");
    }

}