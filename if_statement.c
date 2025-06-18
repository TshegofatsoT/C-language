//PROBLEM I 
//a) Write a program that uses repetition and switch statements to print the seven days of a week based on the input from the user.
// Your program should request a number from the user and print the day in words accordingly.Assuming the first day of a week is Monday, 
// the program should print Wednesday when the user enters number 3.
// 
#include <stdio.h>

int main() {
    //integer variable for user input
    int intUsersday;

    //user input
    printf("Please enter a number between 1 to 7: ");
    scanf_s("%d", &intUsersday);

    // Use if-else statements to determine the day
    if (intUsersday == 1) {
        printf("Monday");
    } else if (intUsersday == 2) {
        printf("Tuesday");
    } else if (intUsersday == 3) {
        printf("Wednesday");
    } else if (intUsersday == 4) {
        printf("Thursday");
    } else if (intUsersday == 5) {
        printf("Friday");
    } else if (intUsersday == 6) {
        printf("Saturday");
    } else if (intUsersday == 7) {
        printf("Sunday");
    }
    else {
        printf("Out of Range. Please enter a number between 1 and 7.");
    }
        
}



