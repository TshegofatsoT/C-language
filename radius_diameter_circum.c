//PROBLEM IV 
//Write a program that reads in the radius of a circle and prints the diameter, circumference and area of the circle.
// Use the constant value 3.14159 for n.

#include <stdio.h>

int main() {
    //constant variable
    const float PI = 3.14159;
    //float variable
    float fRadius, fDiameter, fCircumf, fArea;

    //user input
    printf("Please enter the radius of the circle:");
    //Store user input
    scanf_s("%f", &fRadius);

    //calc diameter
    fDiameter = fRadius*2;
    //calc circumference
    fCircumf = fDiameter*PI;
    //calc area
    fArea = fRadius*fRadius*PI;

    // Output results
    printf("The radius of the circle is : %.2f", fRadius);
    printf("\nThe diameter of the circle is : %.2f", fDiameter);
    printf("\nTh circumference of the circle is: %.2f", fCircumf);
    printf("\nThe area of the circle is: %.2f\n", fArea);
}
