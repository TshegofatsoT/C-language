//PROBLEM I 
//Write a program that reads in two numbers and prints whether the first is a multiple of the second

#include <stdio.h>

int main() {
	//first integer variable that will store the number we get from the user
	int intMultiple;

    //second integer variable that will store the number we get from the user
    int intDivider;

	//asks user input
	printf("Please enter your first number: \n");

	//saves the user inputs
	scanf_s("%d", &intMultiple);

    // Asks the user input
    printf("Type a number: \n");

    //asks user input
    scanf_s("%d", &intDivider);

    //checks if its a multiple by dividing first number with the second number
    if (intMultiple % intDivider == 0) {
        // Output if its a multiple
        printf("You entered a multiple of: %d", intMultiple);
    }
    else {
        // Output if its not a multiple
        printf("You did not enter a multiple of: %d", intMultiple);
    }
}
