#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    float average;

    printf("Enter 10 numbers.\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 1)
        {
            printf("%dst number: ", i);
        } else if (i == 2) {
            printf("%dnd number: ", i);
        } else if (i == 3){
            printf("%drd number: ", i);
        } else{
            printf("%dth number: ", i);
        }

        scanf("%d", &number);
        sum += number;
    }

    average = sum / 10.0;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f\n", average);

}
