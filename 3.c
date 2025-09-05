#include<stdio.h>
int main()
{ 
    int length, breadth;
    printf("enter length :");
    scanf("%d",&length);
    printf("enter breadth :");     
    scanf("%d",&breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("Area of rectangle : %d\n", area);
    printf("Perimeter of rectangle : %d\n", perimeter);
    return 0;

    
}