
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





void reserved_print_arr(int arr[], size_t arr_len)
{
    int i = 0;
    for (i = 0; i < arr_len; i++)

        printf("%d ", arr[i]);

    printf("\n");
}

int* insert_into_array(int arr[], size_t arr_len, int value, size_t pos)

{
    int i = 0;
    if (pos >= arr_len)

    {
        printf("Index out of bounds\n");

        return arr;
    }

    for ( i = arr_len - 1; i > pos; i--)

        arr[i] = arr[i - 1];

    arr[pos] = value;

    return arr;
}


int main() {

    int arr1[] = { 3,4,5,6,3,4,5,6 };
    size_t arr_len;

    int* result;
    arr_len = sizeof(arr1) / sizeof(int);
    printf("Before insertion\n");
    reserved_print_arr(arr1, arr_len);
    result = insert_into_array(arr1, arr_len, 6, 2);
    printf("After Insertion\n");
    reserved_print_arr(result, arr_len);


    //insert_into_array();
    // for this project, you don't need to use user_main, but you can use it to create and test your program
    // user_main() won't be used for grading
    return 0;
}



