#include<stdio.h>
int main()
{
   int radius;
   printf("enter radius of circle :");
   scanf("%d",&radius);
   float area = 3.14 * radius * radius;
   float circumference = 2 * 3.14 * radius;
   printf("area of circle : %.2f\n", area);
printf(" circumference of circle : %.2f\n", circumference);
    return 0;
}