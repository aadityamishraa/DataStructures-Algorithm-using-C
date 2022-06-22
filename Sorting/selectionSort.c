#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function to perform Selection sort
void selectionSort(int *arr, int size)
{
    int min;
    int i, j;
    for (i = 0; i < size; i++)
    {
        min = i;

        // choosing the min value in the array
        for (j = i + 1; j < size; j++)
        {
            if (*(arr + j) < *(arr + min))
            {
                min = j;
            }
        }

        // swapping the min value and the value at beginning
        if (min != i)
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + min);
            *(arr + min) = temp;
        }
    }
}

int main()
{
    // variable declaration
    int size;
    int *arr;
    int i;

    // Taking the size of the array
    printf("Enter the size of array : ");
    scanf("%d", &size);

    // dynamically allocating memory for the array
    arr = (int *)malloc(size * sizeof(int));

    // inserting the elements into the array
    printf("Enter the elements in the array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }

    // sorting function is invoked
    selectionSort(arr, size);

    // printing the sorted array
    printf("Sorted array is : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}