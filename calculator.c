#include <stdio.h>
#include <math.h>

int addition ( int a , int b ){
    return a + b ;
}

int subtraction ( int a , int b ){
    return a - b ;
}

int multiplication ( int a  , int b ){
    return a * b ;
}

float division ( int a , int b ){
    float res = 1.0 * a / b ;
    return res ;
}

int power ( int a , int b ){
    int res = 1 ;
    if ( b == 0 ){
        return 1 ;
    }
    for ( int  i = 0; i < b ; i++)
    {
        res *= a ;
    }
    return res ;
}

float percentage ( int a , int b ){
    float res =  1.0 * a * b / 100 ;
    return res ;
}

float logatob( int a , int b ){
    float res = log ( a ) / log ( b );
    return res ;
}


int main()
{
    printf("Enter the operation that you want to perform \n");
    printf("1. sum \n2. subtraction\n3. multiplication\n4. division\n5. power \n6. percentage\n7. log a to base b  \n8. no action required\n ");
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 8)
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
    else if (n == 2)
    {
        printf("Enter the two values \n");
        int a, b;
        scanf("%d %d", &a, &b);
        int res = subtraction(a, b);
        printf("%d minus %d is %d\n", a, b, res);
    }
    else if (n == 3)
    {
        printf("Enter the two values \n");
        int a, b;
        scanf("%d %d", &a, &b);
        int res = multiplication(a, b);
        printf("%d  multiplied by  %d is %d\n", a, b, res);
    }
    else if (n == 4)
    {
        printf("Enter the two values \n");
        int a, b;
        scanf("%d %d", &a, &b);
        float res = division(a, b);
        printf("%d divided by %d is %f\n", a, b, res);
    }
    else if (n == 5)
    {
        printf("Enter the two values \n");
        int a, b;
        scanf("%d %d", &a, &b);
        int res = power(a, b);
        if (res == -1)
        {
            printf("Entered value can't be calculated \n");
            return 0;
        }
        printf("%d to the power %d is %d\n", a, b, res);
    }
    else if (n == 6)
    {
        printf("Enter number and percentage value \n");
        int a, b;
        scanf("%d %d", &a, &b);
        float res = percentage(a, b);
        printf("%d percent of %d is %f\n", b, a, res);
    }
    else if ( n == 7 ){
        printf ("Enter two numbers a and b \n");
        int a  ,b ; 
        scanf ( "%d  %d " , &a , &b );
        float res = logatob (a , b  );
        printf ("log %d to the base %d is %d ", a , b , res );
    }
    else if (n == 8)
    {
        printf("THANKS \nNO action to be performed ");
        return 0;
    }
    return 0;
}