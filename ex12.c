#include <stdio.h>
int main()
{
    int n;
    printf("Please enter a number less than 50: ");
    scanf("%d" , &n);

    if(n < 0 || n >= 50)
    {
        printf("Please be careful , print a number between 0 and 50.");
        return 1;
    }
    long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
        printf("Factorial of %d is %lld\n", n , factorial);
}
