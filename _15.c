// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main() {
    char character;
    printf("enter character");
scanf(" %c", &character);
if (character >= 'A' && character <= 'Z') {
    printf("Uppercase");
}
else if (character >= 'a' && character <= 'z') {
    printf("Lowercase");
}
else if (character >= '0' && character <= '9') {
    printf("digit");
}
else {
    printf("special");
}
return 0;
}