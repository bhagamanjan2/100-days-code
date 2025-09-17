// Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main () {
    float cost_price, selling_price , loss , profit, percentage;
    printf("enter cost_price=");
    scanf("%d",&cost_price);
    printf("enter selling_price");
    scanf("%d",&selling_price);
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        percentage = (profit / cost_price) * 100;
        printf("profit = %f\n", profit);
        printf("profit percentage = %f\n", percentage);
    }
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        percentage = (loss / cost_price) * 100;
        printf("loss = %f\n", loss);
        printf("loss percentage = %f\n", percentage);
    }
    else {
        printf("No profit, no loss.\n");
    }
}