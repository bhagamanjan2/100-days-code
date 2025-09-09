// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
int seconds,hours,minutes;
printf("enter time in seconds =");
scanf("%d",&seconds);
int s;
s = seconds;
hours = s / 3600;
minutes = (s % 3600) / 60;
seconds = s % 60;
printf("hours:minutes:seconds %d:%d:%d\n", hours, minutes, seconds);
return 0;



}