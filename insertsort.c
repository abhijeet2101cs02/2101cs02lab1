#include <stdio.h>
  
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
  
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
  
//function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
  

int main()
{
    printf ("Enter the size of array you want to sort \n");
    int n;
    scanf ("%d" , &n);
    int arr[n];
    printf("Now, enter elements\n");
    for ( int i = 0; i < n ; i++)
    {
        scanf( "%d" ,  &arr[i]) ;
    }

    insertionSort(arr, n);
    printArray(arr, n);
  
    return 0;
}