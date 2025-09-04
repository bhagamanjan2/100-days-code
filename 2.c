#include<stdio.h>
int main()
{
    int num1,num2;
    
    printf("Enter two numbers: ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    printf("sum: %d\n",num1+num2);
    printf("diff: %d\n",num1-num2);
    printf("prod: %d\n",num1*num2);
    printf("Qquot: %d\n",num1/num2);  
    return 0;
}