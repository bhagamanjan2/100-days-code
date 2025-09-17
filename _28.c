//
#include <stdio.h>

int main(){
    int a,prod=1;
    printf("Enter the nth teearm\n");
    scanf("%d",&a);
    for(int i =2;i<=a;i+=2)
    {
        prod*=i;
    }
    printf("Product is :%d",prod);

    return 0;
}