//PROBLEM II
//Write a program that reads an integer and prints whether the number Is odd or even.
// [Hint:Use the remainder operator. An even number is a multiple of two, i.e.any multiple of two leaves a remainder of zero when divided by 2].

#include <stdio.h>

int main() {
    //integer variable that will hold the user input
    int intEvenNumber;

    //user input
    printf("Enter an integer: ");
    //stores user input in the variable
    scanf_s("%d", &intEvenNumber);

    //checks if user input is an even number
    if (intEvenNumber % 2 == 0) {
        //displays user input is an even number
        printf("%d is an even number.\n", intEvenNumber);
    }
    else {
        //displays user input is not an even number
        printf("%d is not an even number.\n", intEvenNumber);
    }
}
