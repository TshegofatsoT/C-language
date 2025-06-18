//PROBLEM V 
//Write a program that requests a user to enter their name, followed by their year of birth(YoB), then prints the name of the person with their age.
//For example :
//Input: Enter you name > Thabo
//Input : Enter your YoB › 2000
//Output : Thabo is 19 years old.

#include <stdio.h>

int main() {
    //Constant Year
    const YEAR = 2025;
    //user name
    char username[15];  
    //user age
    int intAge;
    //user year
    int intYear;

    //username
    printf("Enter your name: ");
    scanf_s("%s",username,15);

    //year of birth
    printf("Please enter the year you were born in: ");
    scanf_s("%d", &intYear);

    //age
    intAge = YEAR-intYear;

    //display
    printf("\nHi %s you are now %d years old.\n", username, intAge);

}
