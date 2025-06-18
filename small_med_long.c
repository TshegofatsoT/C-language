//PROBLEM III
//a) Write a C program to accept the height of a person in centimeter and categorize the person according to their height.

#include <stdio.h>

int main() {
    int intHeight;
    const SHORT = 130;
    const TALL = 180;
    const MEDIUM = 150;

    //user height input
    printf("Enter your height in cm: ");
    scanf_s("%d", &intHeight);

    //tall height
    if (intHeight >= TALL) {
        printf("Your height is Tall.");
    }//medium height
    else if (intHeight >= MEDIUM) {
        printf("Your heigth is Medium.");
    }//short height
    else if (intHeight <= SHORT) {
        printf("Your height is Short");
    }
       
}
