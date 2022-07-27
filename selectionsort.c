#include <stdio.h>
 // this function is for swaping integers 
void swap(int *ab, int *yp)
{
    int temp = *ab;
    *ab = *yp;
    *yp = temp;
}
  
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
  
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
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
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}