// Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main() {
    int n, sum; 
    printf("enter a number");
    scanf("%d",&n);
    sum = n*(n+1)/2;
    printf("print the sum of first n natural numbers %d",sum);
    return 0;
    
  
}