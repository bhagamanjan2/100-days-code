// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter a");
    scanf("%d",&a);
     printf("enter b");
    scanf("%d",&b);
     printf("enter c");
    scanf("%d",&c);
   a+b>c;
   a+c>b;
   b+c>a;
if(a+b>c&&a+c>b&&b+c>a){
printf("valid triangle\n");
}
else {
    printf("not valid triangle\n");
}

// check if the triangle is isosceles, equilateral, right angle, or scalene.
if (a==b && b==c){
    printf("equilateral\n");
}
else if(a==b || b==c || a==c){
    printf("isosceles\n");

}
else if (a!=b && b!=c && a!=c){
    printf("scalene\n");
}
else if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ){
    printf("right angle triangle\n");
}
return 0;

}