// A program to sort an array with bubble Sort algorithm

#include <stdio.h>
#include <conio.h>

// defining the function for sorting
void bubbleSort(int arr[], int size)
{
    int temp, i, j;
    for (i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    // declaring variables
    int size;
    int arr[20];
    int i;
    
    //  taking the size of array
    printf("Enter the size of array : ");
    scanf("%d", &size);

    // taking elements in the array
    printf("Enter the elements in the arrya : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // calling the bubble sort function
    bubbleSort(arr, size);

    // printing the sorted array
    printf("Sorted array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}