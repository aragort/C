/* Main function of the C program. */

//Name: Angie Aragort
//Course number : CS50 1240
//Date :07/08/2020
 //Purpose(what does this program do ? )
 //Input: 
  //Output:


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * This is your main function - my hidden main() will execute this function
 * when you "Run", but execute the tests when you hit "Submit"
*/
int main() {
    float actual_value;
    int exception;
    int cont = 1;
    const double tax = 01.89;
    const int propertyDiscount = 10000;

    // TODO: Add a loop, and add the property tax calculation

    do 
    {
        printf("What is the property's actual value: \n");
        scanf_s("%f", &actual_value);
        printf("Does the homeowner's exception apply (1=yes, 0=no): \n");
        scanf_s("%d", &exception);

        float assessed_value = actual_value * .75;
        


    if (exception == 0)
        {
           
            float tax_owed = assessed_value * tax /100;
           
          


            printf("Assesed value is: $%.2f\n", assessed_value);
            printf("Property tax owed is: $%.2f\n", tax_owed);
            printf("Quarterly tax option not available\n");

            
        }

    else if (exception == 1)
    {

        float value_discount = assessed_value - propertyDiscount;
        float tax_owed = round(value_discount * tax);
        float taxowed = value_discount * tax/ 100;
       
        float quarterly_tax = round( tax_owed / 4) /100;
        printf("Assesed value is: $%.1f\n", value_discount);
        printf("Property tax owed is: $%.1f\n",taxowed);
        printf("Quarterly tax owed is: $%.2f\n", quarterly_tax);
        printf("Quarterly tax option not available\n");
       

    }

    printf("Do you want to continue [1=yes, 0=no]: ");
    scanf_s("%d", &cont);
    } while (cont == 1);
        // TODO: the value of "cont" should determine whether or not to continue the loop.
}


