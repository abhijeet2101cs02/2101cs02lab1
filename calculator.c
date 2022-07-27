#include <stdio.h>

int addition ( int a , int b ){
    return a + b ;
}

int main()
{
    printf("Enter the operation that you want to perform \n");
    printf("1. sum \n2. subtraction\n3. multiplication\n4. division\n5. power \n6. percentage \n7. no action required\n ");
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 7)
    {
        printf("YOUR INPUT IS WRONG \n");
        return 0;
    }
    else if (n == 1)
    {
        printf("Enter the two values \n");
        int a, b;
        scanf("%d %d", &a, &b);
        int res = addition(a, b);
        printf("Sum of %d and %d is %d\n", a, b, res);
    }
    // else if (n == 2)
    // {
    //     printf("Enter the two values \n");
    //     int a, b;
    //     scanf("%d %d", &a, &b);
    //     int res = subtraction(a, b);
    //     printf("%d minus %d is %d\n", a, b, res);
    // }
    // else if (n == 3)
    // {
    //     printf("Enter the two values \n");
    //     int a, b;
    //     scanf("%d %d", &a, &b);
    //     int res = multiplication(a, b);
    //     printf("%d  multiplied by  %d is %d\n", a, b, res);
    // }
    // else if (n == 4)
    // {
    //     printf("Enter the two values \n");
    //     int a, b;
    //     scanf("%d %d", &a, &b);
    //     float res = division(a, b);
    //     printf("%d divided by %d is %f\n", a, b, res);
    // }
    // else if (n == 5)
    // {
    //     printf("Enter the two values \n");
    //     int a, b;
    //     scanf("%d %d", &a, &b);
    //     int res = power(a, b);
    //     if (res == -1)
    //     {
    //         printf("Entered value can't be calculated \n");
    //         return 0;
    //     }
    //     printf("%d to the power %d is %d\n", a, b, res);
    // }
    // else if (n == 6)
    // {
    //     printf("Enter number and percentage value \n");
    //     int a, b;
    //     scanf("%d %d", &a, &b);
    //     float res = percentage(a, b);
    //     printf("%d percent of %d is %f\n", b, a, res);
    // }
    else if (n == 7)
    {
        printf("THANKS \nNO action to be performed ");
        return 0;
    }
    return 0;
}