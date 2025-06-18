//PROBLEM III
//Write a program that asks the user to enter three numbers from a keyboard, 
// then prints the sum, average, product, the smallest and largest of these numbers.

#include <stdio.h>

int main() {
    int intNumber1, intNumber2, intNumber3, intSumofNum, intProdNum, intSmallNum, intLargeNum;
    float fAvg;

    //First user input
    printf("Enter the first number: ");
    scanf_s("%d", &intNumber1);

    //Second user input
    printf("Enter the second number: ");
    scanf_s("%d", &intNumber2);

    //Third user input
    printf("Enter the third number: ");
    scanf_s("%d", &intNumber3);

    //Sum
    intSumofNum = intNumber1 + intNumber2 + intNumber3;
    //Average
    fAvg = intSumofNum / 3; 
    //Multiple all numbers
    intProdNum = intNumber1 * intNumber2 * intNumber3;

    //smallest number
    intSmallNum = intNumber1;
    if (intNumber2 < intSmallNum) {
        intSmallNum = intNumber2;
    }
    if (intNumber3 < intSmallNum) {
        intSmallNum = intNumber3;
    }

    //largest number
    intLargeNum = intNumber1;
    if (intNumber2 > intLargeNum) {
        intLargeNum = intNumber2;
    }
    if (intNumber3 > intLargeNum) {
        intLargeNum = intNumber3;
    }

    //Display
    printf("\nThe sum of the 3 numbers is: %d", intSumofNum);
    printf("\nThe average of the 3 numbers is: %.2f", fAvg);
    printf("\nThe product of the 3 numbers is: %d", intProdNum);
    printf("\nThe smallest number is: %d", intSmallNum);
    printf("\nThe largest number is: %d\n", intLargeNum);
}
