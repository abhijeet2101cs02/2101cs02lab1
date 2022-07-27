#include<stdio.h>    
 void print(int a[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
    }  
 void bubble(int a[], int n) // function to implement bubble sort  
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
void main ()    
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
    bubble(arr , n);  
    printf("\nAfter sorting array elements are - \n");    
    print(arr , n);  
}    