/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

/*
 * This is your main function - my hidden main() will execute this function
 * when you "Run", but execute the tests when you hit "Submit"
*/
int main() {
    // YOUR IMPLEMENTATION GOES HERE
    //Declare a integer to store the digit.
    int digit;
    //The scanf() function is used to accept input from the keyboard. 
    scanf_s("%d", &digit);
    //Since the possible cases statements are more than three, I used the switch statement to check which is true. 
    //Parameter that takes is the variable digit
    switch (digit) {
        // each case check if the statement is true, if it is, print the dtring to the console.
        // when the break statement is reached, the switch terminates, and the flow of control jumps to the next line following the switch statement.
        //default statement is an option used when no other case is true. 
    case 1:
        printf(" One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    case 0:
        printf("Zero");
        break;

    default:
        printf("Program only handles single digits");

    }

    


    return 0;
}
