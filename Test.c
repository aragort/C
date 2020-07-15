/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>



//Name: Angie Aragort
//Course number: CS50 1240
//Date: 07/04/2020
//Purpose: The program takes two  integers and assigns them to the variables xy in a coordinate system.  This point is evaluated to determine in which quadrant the coordinate point lies.
//Input: Two integer values, data type int.
//Output: printf() prints a string indicating the position of the coordinate. %d is used as a placeholder to represent the value of the coordinates(variables x and y).


/*
 * This is your main function - my hidden main() will execute this function
 * when you "Run", but execute the tests when you hit "Submit"
*/
//In this case, the program initiate at the moment of the user_main() function is invoked. 
//Curly braces indicated the starting point of the program.
int main() {

    // The data type used to declare x and y variables is int, which defines a integer value.
    int x, y;

    //The scanf() function is used to accept input from the keyboard. 
    //%d  is a data type specifier that reads the int value and assigned it to the variables x and y pointed with the & respectively.
    scanf_s("%d %d", &x, &y);

    // The if conditional evaluate if the values assigned to x and y are both (&&) equal to 0.
    if (x == 0 && y == 0)

        // If the condition is true, the printf() function pritn to the console a string indicating the coordinate lies in the Origin.
        //Inside the printf() function, %d is used as a placeholder of the integer values assigned to the variables x and y, respectively.
        printf("The coordinate point (%d,%d) lies in the Origin.", x, y);

    //This Else if conditional is evaluated if the first conditional is not true.
    //The conditional evaluates if the values of the variables x and y are both (&&) greater than 0.
    else if (x > 0 && y > 0)

        //If the condition is true, the printf() function pritn to the console a string indicating that the coordinate lies in the First quadrant.
        //Inside the printf() function, %d is used as a placeholder of the int values assigned to the variables x and y, respectively.
        printf("The coordinate point (%d,%d) lies in the first quadrant.", x, y);

    //This Else if conditional is evaluated when the previous statements are not true.
    //This conditional evaluates if x is less than 0 and y is greater than 0.
    else if (x < 0 && y > 0)

        //If the condition is true, the printf() function pritn to the console a string indicating that the coordinate lies in the Second quadrant.
        //Inside the printf() function, %d is used as a placeholder of the integer values assigned to the variables x and y, respectively.
        printf("The coordinate point (%d,%d) lies in the second quadrant.", x, y);

    //This Else if conditional is evaluated when the previous statements are not true.
    //This conditional evaluates if x is less than 0 and y is greater than 0.
    else if (x < 0 && y < 0)

        //If the condition is true, the printf() function pritn to the console a string indicating that the coordinate lies in the Third quadrant.
        //Inside the printf() function, %d is used as a placeholder of the integer values assigned to the variables x and y, respectively.
        printf("The coordinate point (%d,%d) lies in the third quadrant.", x, y);

    //This Else if conditional is evaluated when the previous statements are not true.
    //This conditional evaluates if x is greater than 0 and y is less than 0.
    else if (x > 0 && y < 0)

        //If the condition is true, the printf() function pritn to the console a string indicating that the coordinate lies in the Forth quadrant.
        //Inside the printf() function, %d is used as a placeholder of the integer values assigned to the variables x and y, respectively.
        printf("The coordinate point (%d,%d) lies in the fourth quadrant.", x, y);

    //Return statement ends ends the execution of the function.
    return 0;

    //Closising braces indicate the end of the block.
}