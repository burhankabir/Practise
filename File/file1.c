#include <stdio.h>
#include <stdlib.h> // Needed for malloc, realloc, and free


int main() 
    {
        // Use malloc to dynamically allocate memory for an array of 3 integers
        int *arr = (int *)malloc(3 * sizeof(int));


        // Check if memory allocation was successful
        if (arr == NULL)
            {
                printf("Memory allocation failed.\n");
                return 1; // Exit the program with an error code
            }


        // Assign values to the array (e.g., the values 11, 12, 13)
        for (int i = 0; i < 3; i++) 
            {
                arr[i] = i + 11; // Assigning values 11, 12, 13
            }


        // Print the values stored in the array before reallocating
        printf("Values stored in the array before reallocating:\n");
        for (int i = 0; i < 3; i++)
            {
                printf("%d ", arr[i]);
            }
        printf("\n");


        // Use realloc to resize the array to hold 6 integers
        arr = (int *)realloc(arr, 6 * sizeof(int));


        // Check if memory reallocation was successful
        if (arr == NULL) 
            {
                printf("Memory reallocation failed.\n");
                return 1; // Exit the program with an error code
            }


        // Assign new values to the additional elements (e.g., 14, 15, 16)
        for (int i = 3; i < 6; i++) 
            {
                arr[i] = i + 11; // Assigning values 14, 15, 16 to the additional elements
            }


        // Print the values stored in the array after reallocating and assigning new values
        printf("Values stored in the array after reallocating and assigning new values:\n");
        for (int i = 0; i < 6; i++) 
            {
                printf("%d ", arr[i]);
            }
        printf("\n");


        // Free the allocated memory
        free(arr);


        return 0;
    }


