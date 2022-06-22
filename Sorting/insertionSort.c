// A program to sort an array with insertion sort algorithm

#include<stdio.h>
#include<conio.h>

int main()
{
    // Declaring the variables
    int size;
    int i, j;
    int arr[20];

    // Taking the size of array and the elements in the array
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    for ( i = 1; i < size; i++)
    {
        int temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    // printing the sorted array
    printf("Sorted array is: \n"); 
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}